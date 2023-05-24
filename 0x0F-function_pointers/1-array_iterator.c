#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - entry point for a function that executes a function
 * which is a paramenter on an array
 * @array: the array
 * @action: pointer of the function
 * @size: the size of the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
