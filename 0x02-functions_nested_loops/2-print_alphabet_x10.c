#include "main.h"

/**
 * print_alphabte_x10 - function that will print alphabet 10 times
 *
*/

void print_alphabte_x10(void)
{
	int line, ch;

	for (line = 0; line <= 9; line++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
