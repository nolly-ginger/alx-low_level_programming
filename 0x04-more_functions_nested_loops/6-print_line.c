#include "main.h"

/**
 * print_line - P rint line that draws a line
 * @n: number of thimes a character dhould be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
