#include "main.h"

/**
 * print_alphabte_x10 - function that will print alphabet 10 times
 *
*/

void print_alphabte_x10(void)
{
	int line, ch;

	for (line = 0; line <= 10; line++)
	{
		for (ch = 97; ch <= 122; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
