#include "main.h"

/**
 * more_numbers - Prints 10X numbers from 0 - 14
 *
 * Return: 0.
 */

void more_numbers(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		a = 0;
		while (a <= 14)
		{
			if (a >= 10)
			{

			_putchar(a / 10 + '0');
			}
			_putchar(a % 10 + '0');
			a++;
		}

		_putchar('\n');
	}
}

