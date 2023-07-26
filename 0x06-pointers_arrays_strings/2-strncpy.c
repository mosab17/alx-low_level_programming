#include "main.h"

/**
* *_strncpy - function that concat
*
* @dest: frist char
* @src: scond char
* @n: thard char
* Return: zero
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;

	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

		return (dest);

}
