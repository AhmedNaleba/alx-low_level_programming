#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatinates 2 strings
 * @s1: First operand
 * @s2: Second operand
 *
 * Return: NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int m, h, p, f;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (m = 0; s1[m] != '\0'; m++)
		;

	for (h = 0; s2[h] != '\0'; h++)
		;

	a = malloc(sizeof(char) * (m + h + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (p = 0; p < m; p++)
		a[p] = s1[p];

	f = h;
	for (h = 0; h <= f; p++, h++)
	{
		a[p] = s2[h];
	}

		return (a);
}

