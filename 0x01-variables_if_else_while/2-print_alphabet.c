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

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
