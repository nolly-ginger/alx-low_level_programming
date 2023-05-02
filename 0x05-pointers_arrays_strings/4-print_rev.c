#include "main.h"
#include <string.h>

/**
 * print_rev - Print the following string in reverse
 * @s: the string to be printed
 *
 * Return: 1 when a seccess and -1 when false
 */

void print_rev(char *s)
{
	int i, x;

	x = 0;
	while (s[x] != '\0')
	{
		i++;
	}

	for (i = x - 1; i >= 0; i--)
	{
		printf("%s\n", s);
	}
}
