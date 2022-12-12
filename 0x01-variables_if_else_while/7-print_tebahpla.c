#include <stdio.h>

/**
 * main - Prints Lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);

}

