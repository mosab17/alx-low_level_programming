#include "main.h"

/**
* factorial - recursion
*
* @n: frist input pointer
*
*
*
*Return: pointer
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}






