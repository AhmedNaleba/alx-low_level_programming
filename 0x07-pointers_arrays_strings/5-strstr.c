#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: First operand
 * @needle: Second operand
 *
 * Return: Pointer to the beginning of the located substring else NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (a = 0; needle[a]; a++)
		{
			if (haystack[a] != needle[a])
			break;
		}
			if (a != b)
				haystack++;
				else
					return (haystack);
			}
		return ('\0');
}

