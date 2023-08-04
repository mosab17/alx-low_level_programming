#include "main.h"

/**
* _isupper - check is c upper
*
* @c: input for alphabet
*
*
* Return: 1 if its upper
*/

int _isupper(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

