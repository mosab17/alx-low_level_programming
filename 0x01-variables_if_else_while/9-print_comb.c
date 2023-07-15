#include <stdio.h>

/**
 * main - entr point
 *
 * Description: print alphabte use putchar
 *
 * Return: 0 (seccuse)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
	putchar(digit + 48)
		if (digit != 9)
		{
			putchar(',')
				putchar(' ')
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
