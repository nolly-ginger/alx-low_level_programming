#include "main.h"

/**
 * print_last_digit - will print last digit of a number
 * @x: will display last number being printed
 *
 * Return: value of input
 */

int print_last_digit(int x)
{
	int i;

	i = x % 10;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar(i + '0');
	return (i);
}
