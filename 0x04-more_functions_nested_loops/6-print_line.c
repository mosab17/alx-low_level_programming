#include "main.h"

/**
* print_line - print 0 - 9
*
* @n: is the number of time
*
*
*
*/
void print_line(int n)
{
	int inchr;

	if (n <= 9)
		_putchar('\n');
	else
	{
		for (inchr = 1; inchr <= n; inchr++)
			_putchar('_');

	}
	_putchar('\n');
}

