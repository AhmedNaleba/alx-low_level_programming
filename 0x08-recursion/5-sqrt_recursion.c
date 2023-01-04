#include "main.h"

/**
 * help - Finds square of two numbers
 * @b: first operand
 * @c: second operand
 *
 * Return: Squares of a and b
 */

int help(int b, int c)
{
	if (c * c > b)
	return (-1);

	else if (c * c == b)
	return (c);

	else
		return (help(b, c + 1));

				return (1);
}

/**
 * _sqrt_recursion - Prints natural square root of a number
 * @n: Operand
 *
 * Return: - on Error
 */

int _sqrt_recursion(int n)
{

	if (n == 0)
		return (0);
	return (help(n, 1));
}

