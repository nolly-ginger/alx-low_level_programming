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

	for (i = 62; i >= 0; i--)
	{
		y = (n >> i) & 1;
		if (y == 0)
		{
			j = 1;
		}

		if (j == 1)
		{
			_putchar(((n >> i) & 1) + '0');
		}
	}
	if (n == 0)
		_putchar('0');
}
