#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints the last digit of a number.
 * @r: character to be checked
 *
 * Return: 0.
 */

int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;

	if (last_digit < 0)
	{
		last_digit = (-1 * last_digit);
	}
	_putchar(last_digit + '0');

	return (last_digit);

}

