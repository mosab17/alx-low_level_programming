#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int j, cou = 0;
	unsigned long int curr;
	unsigned long int excl = n ^ m;

	for (j = 63; j >= 0; j--)
	{
		curr = excl >> j;
		if (curr & 1)
			cou++;
	}

	return (cou);
}
