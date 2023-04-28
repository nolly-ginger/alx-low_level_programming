#include <stdio.h>

/**
 * _isupper - will be the entry point of code
 * to check for all uppercase charactrs
 * @c: will displace the input character
 *
 * Return 1 if c is uppercase, otherwise return 0
 */

int _isupper(int c)
{
	c = 28;

	for (c = 'A'; c <= 'Z'; c++)
	{
		return (1);
	}

	for (c = 'a'; c <= 'z'; c++)
	{
		return (0);
	}

	return (c);
}
