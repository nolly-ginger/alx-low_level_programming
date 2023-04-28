#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= 10)
			{
				_putchar(1);
			}
			_putchar((j % 10) + 0);
		}
		_putchar('\n');
	}
}
