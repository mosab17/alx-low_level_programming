#include "main.h"

/**
 * swap_int - test pointer
 *
 * @a: first input pointer
 * @b: second input pointer
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

