#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: First operand
 * @accept: Second operand
 *
 * Return: Byte in s that matches one of the bytes in accept else NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}

	return (NULL);
}

