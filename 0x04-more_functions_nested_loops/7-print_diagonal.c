#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Character to be checked
 *
 * Return: 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
		_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}

}

