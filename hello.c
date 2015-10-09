#include <stdio.h> 
#include <omp.h>

int main()
{
        int i = 0;
        int indicator = 0;
        #pragma omp parallel shared(indicator)
        {
		while ( indicator != 32)
		{
                	if (omp_get_thread_num() == indicator)
                	{
                        	printf("Hello!I am thread %d\n", omp_get_thread_num() );
                        	indicator++;
				i++;
               		}
        	}
	}
        printf("n = %d\n", i);
        return 0;
}
	
