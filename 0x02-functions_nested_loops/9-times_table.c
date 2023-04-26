#include "main.h"

/**
 * times_table - print 9 timetables starting with 0
 * from 0 to 9
 *
 * Return: null
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);

		for (b = 1; b <= 9; b++)
		{
			c = a * b;
			_putchar(44);
			_putchar(32);

			if (c <= 9)
			{
				_putchar(32);
				_putchar(c + 48);
			}
			else
			{
				_putchar((c / 10) + 48);
				_putchar ((c % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
