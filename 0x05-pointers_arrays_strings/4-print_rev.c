#include "main.h"

/**
 * print_rev - Print the following string in reverse
 * @s: the string to be printed
 *
 * Return: 1 when a seccess and -1 when false
 */

void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
