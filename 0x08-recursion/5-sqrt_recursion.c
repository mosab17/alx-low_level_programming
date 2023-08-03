#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
* _sqrt_recursion - recursion
*
* @n: frist input pointer
*
*
*
*Return: pointer
*/

int _sqrt_recursion(int n)
{
	return (actual_sqrt_recursion(n, 1));
}

/**
* actual_sqrt_recursion - recursion
*
* @n: frist input pointer
* @i: second input
*
*
*Return: pointer
*/
int actual_sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (actual_sqrt_recursion(n, i + 1));
	else
		return (-1);	
}
