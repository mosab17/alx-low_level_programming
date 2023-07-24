#include "main.h"

/**
 * _puts - test pointer
 *
 * @str: first input pointer
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		Str++;
	}
	_putchar('\n');
}


