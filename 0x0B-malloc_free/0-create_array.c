#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: First operand
 * @c: Second operand
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(c) * size);

	if  (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

