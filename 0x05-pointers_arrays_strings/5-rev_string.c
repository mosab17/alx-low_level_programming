#include "main.h"

/**
 * rev_string - test pointer
 *
 * @s: first input pointer
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int l, i;
	char temp;

	for  (l = 0; s[l] != '\0'; ++l)
		;
	for (i = 0; i < 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[l] - 1;
		s[l] = temp;
	}
}


