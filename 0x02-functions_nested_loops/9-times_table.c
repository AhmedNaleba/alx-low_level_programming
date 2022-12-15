#include "main.h"

/**
 * times_table - Prints 9 times table
 *
 * Return: 0.
 */
void times_table(void)
{
	int a;
	int b;
	int m;

	for (a = 0; a <= 9; a++)
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
		for (b = 0; b <= 9; b++)
		{
			m = (a * b);

		if ((m / 10) > 0)
		{
			_putchar((m / 10) + '0');
		}
		else
		{
			_putchar(' ');
		}
			_putchar((m % 10) + '0');

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		}
		
}

