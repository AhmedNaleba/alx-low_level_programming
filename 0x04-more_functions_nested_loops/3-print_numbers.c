#include "main.h"

/**
 * print_numbers - Prints numbers from 0 - 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = '1'; a <= '9'; a++)
	{
		_putchar(a);
	}

	_putchar('\n');
}

