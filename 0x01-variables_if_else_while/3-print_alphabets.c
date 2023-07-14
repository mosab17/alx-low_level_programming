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
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
		putchar('\n');
	return (0);
}
