#include "main.h"

/**
**_memcpy - function file memory
*
* @dest: frist input pointer
* @src: scond input
* @n: therd input
*
*Return: pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
