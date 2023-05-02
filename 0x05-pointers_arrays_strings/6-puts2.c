#include "main.h"

/**
 * puts2 - Print every other character of tring starting with the firt one
 * @str: characters of the string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i, x;

	while (str[x] != '\0')
	{
		x++;
	}
	for (i = 0; i < x; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
