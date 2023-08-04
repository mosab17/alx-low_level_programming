#include "main.h"

/**
* _memset - function file memory
*
* @s: frist input pointer
* @b: scond input
* @n: therd input
*
*Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++)
	{
		s[itr] = b;
		n--;
	}
	return (s);
}
