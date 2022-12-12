#include <stdio.h>

/**
 * main - Prints alphabet in lowercase except q and e
 *
 * Return: 0
 */
 int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if ((a = 'q') && (a = 'e'))
		{
			continue;
		}
		else 
		{
			putchar(a);
		}
		putchar('\n');
	}

	return (0);
}

