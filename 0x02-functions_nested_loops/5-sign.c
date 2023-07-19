#include "main.h"

/**
 * print_sign - Determinse if the input number
 * gerat than or less than
 *
 * @n: The input of number
 *
 * Return: 1 is gerat than zero , 0 is zero -1
 * is less than
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
