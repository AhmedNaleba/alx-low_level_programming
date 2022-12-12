#include <stdio.h>

/**
 * main - Prints in lowercase base 16 numbers
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}

