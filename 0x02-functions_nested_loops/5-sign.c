#include "main.h"

/**
 * print_sign - print the sign of the number or 0 if it is 0
 * @n: will be the character displaying the sign
 *
 * Return: 1 if positive, 0 if n is 0, or -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
