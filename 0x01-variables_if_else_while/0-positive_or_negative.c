#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Assigns a random number to n upon execution
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negavtive\n", n);
	}

	return (0);
}

