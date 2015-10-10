#include <stdio.h>
#include <omp.h>

int main()
{
	int num_of_iter;
	float result = 0;
	int i = 1;

	scanf("%d", &num_of_iter);
	#pragma omp parallel for
	for( i = 1; i <= num_of_iter; i++)
		result += 1.0/i;
	printf("%f\nThe number of terms:%d\n", result, num_of_iter);
	return 0;
}

