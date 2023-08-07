#include "main.h"

/**
* *str_concat - recursion
*
* @s1: frist input pointer
* @s2: second input
*
*
*Return: 0
*/

char *str_concat(char *s1, char *s2)
{
	char *co;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	co = malloc(sizeof(char) * (i + ci + 1));

	if (co == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		co[i] = s1[i];
		i++;
	}
	while (s2[ci] != '\0')
	{
		co[i] = s2[ci];
		i++, ci++;
	}
	co[i] = '\0';
	return (co);

}



