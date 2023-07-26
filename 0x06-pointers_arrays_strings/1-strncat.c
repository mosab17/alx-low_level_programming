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
		c++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = '\0';

		return (dest);

}
