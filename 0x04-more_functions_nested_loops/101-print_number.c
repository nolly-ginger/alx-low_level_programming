#include "main.h"

/**
 * print_number - Print an integer
 * @n: the integer
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		_putchar(i / 10);
	}
	_putchar((i % 10) + '0');
}
