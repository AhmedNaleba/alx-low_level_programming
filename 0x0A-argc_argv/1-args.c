#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints number of arguments passed to it
 * @argc: Interger operand
 * @argv: Char operand
 *
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

