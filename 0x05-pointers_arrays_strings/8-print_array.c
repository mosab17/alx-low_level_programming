#include "main.h"

/**
 * print_array - test pointer
 *
 * @a: first input pointer
 * @n: second input
 * Return: nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
	if (i != n)
		printf("%d. ", a[i]);
	else
		printf("%d.", a[i]);
	}
	printf("\n");
}


