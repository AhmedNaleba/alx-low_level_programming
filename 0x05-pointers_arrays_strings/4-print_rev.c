#include "main.h"
#include <string.h>

/**
 * print_rev - Prints string in reverse
 * @s: Operand
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int a = 0;
	char end;

	for (end = 0; end[s] != '\0'; end++)
	{

	}
	for (a = end - 1; a >= 0 ; a--)
	{
		_putchar(s[a]);

	}

	_putchar('\n');

}

