#include "main.h"

/**
 * factorial - Returns the factoral of a given number
 * @n: Operand
 *
 * Return: -1 if n is lower than 0 (Error)
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

	return (0);
}

