#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: First operand
 * @src: Second operand
 * @n: Third operand
 *
 *Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		src[a] = *dest;
	}

	return (dest);
}

