#include "main.h"

/**
* _strlen_recursion - recursion
*
* @s: frist input pointer
*
*
*
*Return: pointer
*/

int _strlen_recursion(char *s)
{
	int r = 0;

	if (*s > '\0')
	{
		r += _strlen_recursion(s + 1) + 1;
	}
	return (r);
}






