#include <stdio.h>

/**
 * main - Prints a string to the standard error.
 *
 * Return: 1
 */

int main(void)
{
	fwrite("and that piece of art is useful\"", 32, 1, stderr);
	fwrite(" - Dora Korpar, 2015-10-19\n", 27, 1, stderr);

	return (1);
}

