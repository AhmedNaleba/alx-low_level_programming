#include "main.h"
#include <ctype.h>

/**
 * _islower - Checks for lowercase character.
 * @c: Character to be checked.
 *
 * Return: 0.
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);

}

