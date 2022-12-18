#include "main.h"

/**
 * print_times_table - Prints n times table
 * @n: Opperand
 *
 * Return: 0.
 */

void print_times_table(int n)
{
	int j;
	int m;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (j = 0; j <= n; j++)
		{
		for (m = 0; m <= n; m++)
		{
			p = j * m;

			if (m == 0)
			{

		_putchar(p + '0');

			}
			else if (p < 10 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
			else if (p >= 10 && p < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
			}
			else if (p >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((p / 10) + '0');
				_putchar((p / 10) % 10 + '0');
				_putchar((p % 10) + '0');
			}
		}

		_putchar('\n');
	}
	}
}

