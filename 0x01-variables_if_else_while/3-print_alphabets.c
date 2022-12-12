#include <stdio.h>

/**
 * main - Prints alphabet in Lower $ Upper case
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

