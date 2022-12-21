#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Operand
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int a, b, len;
	char big, end;

	for (len = 0; s[len] != '\0'; len++)
	{

	}

	a = len - 1;
	b = 0;

	while (a > b)

	{
		big = s[b];
		end = s[a];

		s[b] = end;
		s[a] = big;

		a--;
		b++;
	}

}

