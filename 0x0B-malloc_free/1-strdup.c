#include "main.h"

/**
* _strdup - recursion
*
* @str: frist input pointer
*
*
*
*Return: 0
*/

char *_strdup(char *str)
{
	int i = 0, r = 0;
	char *m;

	if (str == 0)
	{
		return (NULL);
	}

	while (str[i] != '\0')
		i++;
	m = malloc(r * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < r; r++)
			m[r] = str[r];
	}
	return (m);

}



