#include <stdio.h>
#include <omp.h>

int main()
{
	int flow_num = 0;
	
	#pragma omp parallel
	{
		while ( flow_num != 32)
		{
			if( omp_get_thread_num() == flow_num)
			{
				printf("Thread %d transmit message %d to thread %d\n", flow_num, flow_num, flow_num + 1);
				flow_num++;
			}
		}
	}
	printf("transmission succesfully implemented!\n");
	return 0;
}
