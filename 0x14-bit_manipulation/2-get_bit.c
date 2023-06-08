#include "main.h"
#include <stdio.h>

/**
 * get_bit - return valie of bit from its index
 * @n: integer being evaluavted
 * @index: index whre the bit is
 *
 * Return: value of bit at index or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int i;

	if (index > 63)
		return (-1);

	i = (n >> index) & 1;
	return (i);
}
