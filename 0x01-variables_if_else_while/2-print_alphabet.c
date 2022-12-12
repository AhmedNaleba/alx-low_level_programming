#include <stdio.h>
#include <ctype.h>

/**
 * main - Prints reverse alphabet in Lowercase letters.
 *
 * Return: 0
 */

int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}

	putchar('\n');

	return (0);
}

