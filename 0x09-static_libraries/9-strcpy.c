#include "main.h"

/**
 * *_strcpy - test pointer
 *
 * @dest: first input pointer
 * @src: second input
 * Return: nothing
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');
	return (dest);
}


