#include "main.h"

int check_p(int i, int len);
int _strlen_recurtion(char *s);

/**
* is_palindrome - recursion
*
* @s: frist input pointer
*
*
*
*Return: pointer
*/

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_p(s, 0, _strlen_recurtion(s)));
}

/**
* _strlen_recurtion - recurtion
*
* @s: frist input pointer
*
*
*
*Return: pointer
*/
int _strlen_recurtion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recurtion(s + 1));
}

/**
* check_p - recurtion
*
* @i: frist input pointer
* @len: length of string
*
*
*Return: pointer
*/
int check_p(int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_p(s, i + 1, len - 1));
}
