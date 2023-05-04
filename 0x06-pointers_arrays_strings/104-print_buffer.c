#include "main.h"
#include <stdio.h>

/**
 * print_buffer - entry to  print a buffer
 * @b: buffer
 * @size: size of the buffer
 *
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			printf("%.8x:", i);
			for (j = i; j < i; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%.2x:", *(b + j));
				else
				{
					printf("  ");
				}
			}
			printf(" ");
			for (k = j; k < j; k++)
			{
				if (k >= size)
				{
					break;
				}
				if (*(b + k) < 32 || *(b + k) > 126)
				{
					printf("%c", '.');
				}
				else
				{
					printf("%c", *(b + k));
				}
			}
			printf("\n");
		}
	}
}
