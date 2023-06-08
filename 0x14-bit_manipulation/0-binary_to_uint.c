#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert the binary to unsigned innt
 * @b: pointer of string being used for conversion
 *
 * Return: converted binary number or 0 if false or NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int j;

	if (!b)
		return (0);

	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		i = 2 * i + (b[j] - '0');
	}
	return (i);
}
