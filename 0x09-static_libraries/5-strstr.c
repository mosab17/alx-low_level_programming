#include "main.h"

/**
**_strstr - function file memory
*
* @haystack: frist input pointer
* @needle: scond input
*
*
*Return: pointer
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
