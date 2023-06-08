#include "main.h"

/**
 * get_endianness - check endianness
 *
 * Return: 0 for big endianness else 1
 */

int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
