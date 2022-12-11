#include <stdio.h>

/**
 * main - Prints the size of various data types.
 *
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long int lI;
	long long int lLI;
	float f;

	printf("Size of a char: %zu byte(s)\n", sizeof(c));
	printf("Size of an int: %zu byte(s)\n", sizeof(i));
	printf("Size of a long int: %zu byte(s)\n", sizeof(lI));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(lLI));
	printf("Size of a float: %zu byte(s)\n", sizeof(f));

	return (0);
}

