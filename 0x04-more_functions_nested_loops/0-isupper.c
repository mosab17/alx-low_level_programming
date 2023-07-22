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
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

