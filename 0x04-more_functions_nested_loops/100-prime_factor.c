#include <stdio.h>

/**
 * main - Finds largest prime foctor of a number
 *
 * Return: 0.
 */

int main(void)
{
	long int a = 612852475143;
	long int b;

	for (b = 2; b < a; b++)
	{
		if (a % b == 0)
		{
			a = b / b;
		}
	}
	printf("%ld\n", b);

	return (0);
}

