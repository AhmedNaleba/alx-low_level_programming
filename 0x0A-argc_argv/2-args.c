#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints all arguments
 * @argc: Int operand
 * @argv: char operand
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
	printf("%s\n", argv[a]);
	}
	return (0);
}

