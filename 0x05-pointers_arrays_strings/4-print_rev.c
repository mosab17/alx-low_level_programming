#include "main.h"

/**
 * print_rev - test pointer
 *
 * @s: first input pointer
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}


