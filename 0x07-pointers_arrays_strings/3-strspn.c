#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: First operand
 * @accept: Second operand
 *
 * Return: number of bytes in the initial segment of s from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int n = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					n++;
			}
		}
		else
			return (n);
	}
	return (n);
}

