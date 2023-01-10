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
	int m, h, p, f;

	if ((s1 == NULL) && (s2 == NULL))
	{

	}
	for (m = 0; s1[m] != '\0'; m++)
		;

	for (h = 0; s2[h] != 0; h++)
		;

	a = (char *)malloc(sizeof(char) * (m + h + 1));
	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (p = 0; p < m; p++)
	{
		a[p] = s1[p];
	}
	f = h;
	for (h = 0; h <= f; p++, h++)
	{
		a[p] = s2[h];
	}
		return (a);
}

