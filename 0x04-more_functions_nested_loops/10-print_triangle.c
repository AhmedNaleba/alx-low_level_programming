#include "main.h"

/**
 * print_triangle - Prints triangle
 * @size: Opperand
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int a;
	int b;
	int c;

	for (a = 0; a < size; a++)
	{
		for (b = a; b < size; b++)
			{
			_putchar(' ');
			}
		for (c = 0; c <= a; c++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
		if (size <= 0)
		{
			_putchar('\n');
		}
}

