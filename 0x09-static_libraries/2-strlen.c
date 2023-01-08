#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: operand
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}

	return (c);
	return (0);
}

