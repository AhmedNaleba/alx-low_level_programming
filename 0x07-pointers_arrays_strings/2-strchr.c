#include "main.h"
#include <stdlib.h>

/**
 * _strchr - Locates a character in a string
 * @s: First operand
 * @c: Second operand
 *
 * Return: Character in a string else Null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}

