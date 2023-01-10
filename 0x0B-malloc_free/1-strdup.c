#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Prints string
 * @str: Operand
 *
 * Return: Pointer to newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int a, b;

	if (str == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	nstr = (char *)malloc(sizeof(char) * (a + 1));
		if (nstr == NULL)

		return (NULL);

	for (b = 0; b <= a; b++)
		nstr[b] = str[b];
	return (nstr);
}

