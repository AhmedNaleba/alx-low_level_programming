#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


/**
 * malloc_checked - Allocates memmory using malloc
 * @b: Memory to be aloccated
 *
 * Return: Pointer to memory allocated else 98
 */


void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (!x)
	{
		exit(98);
	}

	return (x);

}

