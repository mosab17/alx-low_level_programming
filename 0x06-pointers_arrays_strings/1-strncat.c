#include "main.h"

/**
* *_strncat - function that concat
*
* @dest: frist char
* @src: scond char
* @n: thard char
* Return: zero
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
	{
		c++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[c] = src[i];
		c++;
		i++;
	}
		dest[c] = '\0';

		return (dest);

}
