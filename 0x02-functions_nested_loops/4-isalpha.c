#include "main.h"

/**
 * _isalpha - search for letters lower and upper case
 * @c: wil be the variable used to specify character
 *
 * Return: 1 if any upper or lower case letter, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
