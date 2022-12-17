#include "main.h"

/**
 * print_number - Prints integer
 *@n: Opperand
 *
 * Return: 0'
 */

void print_number(int n)
{
	unsigned int b2 = 0;

	if (n < 0)
	{
		b2 = -n;
		_putchar('-');
	}
	else
	{
		b2 = n;
	}

	if (n / 10)
	{
		print_number(b2 / 10);
	}

	_putchar((b2 % 10) + '0');
}

