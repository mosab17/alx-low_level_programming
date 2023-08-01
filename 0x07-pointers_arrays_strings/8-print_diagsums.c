#include "main.h"

/**
* print_diagsums - file memory
*
* @a: frist input pointer
* @size: sconde input
*
*
*Return: pointer
*/

void print_diagsums(int *a, int size)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < size; y++)
	{
		sum1 += a[y];
		sum2 += a[size - y - 1];
		a += size;
	}
	printf("%d, %d\n", sum1, sum2);
}
