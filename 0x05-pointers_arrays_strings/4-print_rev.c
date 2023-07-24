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
	int i=0;

	while (*s != '\0')
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}


