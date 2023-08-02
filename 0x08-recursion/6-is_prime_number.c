#include "main.h"

int prime(int n, int i);

/**
* is_prime_number - recursion
*
* @n: frist input pointer
*
*
*
*Return: pointer
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
* prime - recursion
*
* @n: frist input pointer
* @i: second input
*
*
*Return: pointer
*/
int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}




