#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: First operand
 * @height: Second operand
 *
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int a, b;

	if (width < 1)
	{
		return (NULL);
	}
	if (height < 1)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

		if (array == NULL)
		{
		free(array);
		return (NULL);
		}
		for (a = 0; a < height; a++)
		{
			array[a] = malloc(width * sizeof(int));
			if (array[a] == NULL)
			{
				for (a--; a >= 0; a--)
				free(array[a]);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
				array[a][b] = 0;
		}
			return (array);
}

