#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * **alloc_grid - return pointer to a 2D array of integers
 * @width: width of pointer
 * @height: height of pointer
 *
 * Return: 2D array of integers
 */

int **alloc_grid(int width, int height)
{
	int **point, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	point = malloc(sizeof(int *) * height);

	if (point == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		point[i] = malloc(sizeof(int) * width);

		if (point[i] == NULL)
		{
			for (; i >= 0; i--)
				free(point[i]);

			free(point);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			point[i][j] = 0;
	}

	return (point);
}
