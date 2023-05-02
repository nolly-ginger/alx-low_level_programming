#include "main.h"

/**
 * swap_int - entry point to swap values of two integers
 * @a: interegr 1
 * @b: integer 2i
 * @x: the swap of int
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
