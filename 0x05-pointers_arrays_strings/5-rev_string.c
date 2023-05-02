#include "main.h"
#include <stdio.h>

/**
 * rev_string - Write a function that reverses a string
 * @s: string that will be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, x, y;
	char str;

	x = 0;
	y = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	y = x - 1;

	for (i = 0; i < x / 2; i++)
	{
		str = s[i];
		s[i] = s[y];
		s[y--] = str;
	}
}
