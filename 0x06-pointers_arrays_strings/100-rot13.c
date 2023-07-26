#include "main.h"

/**
* *cap_string - function that concat
*
*
* @s: scond char
*
* Return: zero
*/

char *cap_string(char *s)
{
	int i;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i <= 52; i++)
		{
			if (*s == s2[i])
			{
				*s = s2[i];
				break;
			}
		}
		s++;
	}
	return (ptr);

}
