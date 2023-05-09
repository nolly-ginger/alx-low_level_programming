#include "main.h"

/**
 * print_diagsums - print sum of twi diagonal squares
 * @a: square 1
 * @size: square 2
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x, y, i;

	x = 0;
	y = 0;

	for (i = 0; i < size; i++)
	{
		x = x + a[i * size + i];
	}
	for (i = size - 1; i >= 0; i--)
	{
		y += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", x, y);
}
