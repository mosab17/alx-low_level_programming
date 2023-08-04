#include "main.h"

/**
 * *_atoi - test pointer
 *
 * @s: first input pointer
 *
 * Return: nothing
*/

int _atoi(char *s)
{
	unsigned int num = 0;
	int sgin = 1;


	do {
		if (*s == '-')
			sgin *= -1;
	else if (*s >= '0' && *s <= '9')
			num = num * 10;
	else if (num > 0)
		break;
	} while (*s++);
	return (num * sgin);

}


