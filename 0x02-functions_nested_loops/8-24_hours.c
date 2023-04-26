#include "main.h"

/**
 * jack_bauer - print out all minutes in 24h
 */

void jack_bauer(void)
{
	int x, y;

	x = 0;

	while (x < 0)
	{
		y = 0;

		while (y < 60)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
		x++;
	}
}


