#include "function_pointers.h"
#include <stdio.h>
#include <ctype.h>

/**
 * int_index - search for an integer on entry point
 * @array: array of integers and variables
 * @size: size of array
 * @cmp: pointer function
 *
 * Return: -1 if not an integer and 1 for integer matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	else if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
