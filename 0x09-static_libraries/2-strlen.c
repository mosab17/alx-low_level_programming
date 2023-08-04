#include "main.h"

/**
 * _strlen - test pointer
 *
 * @s: first input pointer
 *
 * Return: nothing
*/

int _strlen(char *s)
{
	int conter;

	for (conter = 0; *s != '\0'; s++)
		++conter;
	return (conter);
}

