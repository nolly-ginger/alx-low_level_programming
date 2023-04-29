#include "main.h"

/**
 * print_diagonal - Print diagonal lines within terminal followed by new line
 * @n: Number of line the '\' charater should be printed
 *
 * Return" void
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);

		if (i < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
