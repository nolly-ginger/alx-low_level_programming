#include "main.h"

/**
 * puts_half - Print half of the string
 * @str: string in full
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, x, y;

	x = 0;

	while (str[x] != '\0')
	{
		x++;
	}

	if (x % 2 == 0)
	{
		for (i = x / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (x % 2)
	{
		for (y = (x - 1) / 2; y < x - 1; y++)
		{
			_putchar(str[y + 1]);
		}
	}
	_putchar('\n');
}
