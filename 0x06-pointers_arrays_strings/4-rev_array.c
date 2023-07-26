#include "main.h"

/**
* reverse_array - function that concat
*
* @a: frist char
* @n: scond char
*
* Return: zero
*/

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}

}
