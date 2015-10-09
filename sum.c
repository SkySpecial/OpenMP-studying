#include <stdio.h>
#include <omp.h>

int main()
{
	int num_of_iter;
	float result = 0;
	int i;

	scanf("%d", num_of_iter);
	#pragma omp parallel for
	for( i = 0; i < num_of_iter; i++)
		result += 1.0/i;// . показывает, что деление всё-таки плавающее?
	printf("%f\nThe number of terms:%d\n", result, num_of_iter);
	return 0;
}
