#include "main.h"

/**
* print_square - print 0 - 9
*
* @size: is the number of time
*
* Return: always 0 success
*
*/
void print_square(int size)
{
	int row, col;


		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}

}

