#include "main.h"

/**
 * print_binary - represents binary with integer
 * @n: the integer
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int y;

	for (i = 63; i >= 0; i--)
	{
		y = n >> i;
		if (y & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		{
			_putchar('0');
		}
	}
	if (!j)
		_putchar('0');
}
