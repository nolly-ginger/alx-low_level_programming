#include "main.h"

/**
 * reverse_array - entry point to reverse the integers
 * within a particular array
 * @a: integers
 * @n: the number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
