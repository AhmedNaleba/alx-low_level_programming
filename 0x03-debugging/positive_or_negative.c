#include "main.h"

/**
 * positive_or_negative - Checks if number is + or -
 * @i: Character to be checked
 *
 * Return: void.
 */


void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}

}

