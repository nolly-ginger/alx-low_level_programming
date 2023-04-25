#include "main.h"

/**
 * _islower - check only for lower case letters
 *
 * @c: will be the character used to define the letters
 * Return: 1 if lower case, or else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
