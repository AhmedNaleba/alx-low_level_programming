#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds intergers and checks for special xters
 * @argc: Int operand
 * @argv: Char operand
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int sum = 0;

	if (argc == 0)
	{
		printf("0");
	}
	if (argc != isdigit(a))
	{
		printf("Error\n");
		return (1);
	}
	for (a = 1; a < argc; a++)
	{
		sum = sum + atoi(argv[a]);
	}
		printf("%d\n", sum);
	return (0);
}

