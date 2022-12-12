#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Assigns random number upon execution
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int LastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LastDigit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);
	}
	else if (n < 6 && n != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not equal to 0\n", n, LastDigit);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, LastDigit);
	}

	return (0);
}

