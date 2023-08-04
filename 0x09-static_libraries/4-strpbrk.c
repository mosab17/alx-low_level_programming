#include "main.h"

/**
**_strpbrk - function file memory
*
* @s: frist input pointer
* @accept: scond input
*
*
*Return: pointer
*/

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
		s++;
	}
	return ('\0');
}
