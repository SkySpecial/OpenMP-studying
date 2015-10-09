#include <stdio.h>
#include <omp.h>

int main()
{
	int i = 0;
	#pragma omp parallel
	{
		printf("Hello!I am thread %d\n", omp_get_thread_num() );
		i++;
	}
	printf("n = %d\n", i);
	return 0;
}	
