#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return: 0 .
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	_putchar('\n');
}

