#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 * @min: minimum integer value
 * @max: maximum integer value
 *
 * Return: array of integers
 */

int *array_range(int min, int max)
{
	int *i;
	int j;

	if (min > max)
		return (NULL);

	i = malloc(sizeof(*i) * ((max - min) + 1));

	if (i == NULL)
		return (NULL);

	for (j = 0; min <= max; min++, j++)
		i[j] = min;

	return (i);
}
