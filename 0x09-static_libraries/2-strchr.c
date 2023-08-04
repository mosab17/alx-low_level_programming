#include "main.h"

/**
**_strchr - function file memory
*
* @s: frist input pointer
* @c: scond input
*
*
*Return: pointer
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
