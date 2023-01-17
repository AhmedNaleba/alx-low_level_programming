#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings using malloc
 * @s1: First operand
 * @s2: Second operand
 * @n: Third operand
 *
 * Return: Concatinated string pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a, b, c;

	if (s1 == NULL)
		a = 0;
	for (a = 0; s1[a]; ++a)
		;
	if (s2 == NULL)
		b = 0;
	for (b = 0; s2[b]; ++b)
		;
	if (b > n)
		b = n;
	x = malloc((a + b + 1) * sizeof(char));
	if (x == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		x[c] = s1[c];
	for (c = 0; c < b; c++)
		x[a + c] = s2[c];
	x[a + b] = '\0';
	return (x);

}

