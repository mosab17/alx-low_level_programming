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
	int digit2, digit3;

		while (digit <= 9)
		{
			digit2 = 0;
			while (digit2 <= 9)
			{
				digit3 = 0;
				while (digit3 <= 9)
				{

					if (digit != digit2 &&
					digit < digit2 &&
					digit2 != digit3 &&
					digit2 < digit3)
					{
						putchar(digit + 48);
						putchar(digit2 + 48);
						putchar(digit3 + 48);

					if (digit + digit2 + digit3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				digit3++;
			}
			digit2++;
		}
		digit++;
	}
	putchar('\n');
	return (0);
}
