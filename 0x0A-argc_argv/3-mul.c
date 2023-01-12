#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two intergers
 * @argc: Interger operand
 * @argv: Character operand
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;
	int mult = 1;

	for (a = 1; a < argc; a++)
	{
		mult = mult * atoi(argv[a]);
	}
	if (a == 1)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	printf("%d\n", mult);
	return (0);



}

