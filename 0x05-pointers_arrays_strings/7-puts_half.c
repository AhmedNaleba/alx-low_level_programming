#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: Operand
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int a, b;
	int len;


	for (len = 0; str[len] != '\0'; len++)
	{

	}
	a = (len - 1) / 2;

	for (b = a + 1; str[b] != '\0'; b++)
	{

		_putchar(str[b]);

	}

	_putchar('\n');
}

