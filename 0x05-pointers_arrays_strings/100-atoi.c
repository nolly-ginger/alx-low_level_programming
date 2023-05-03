#include "main.h"

/**
 * _atoi - Convert string into an integer
 * @s: the string to be converted
 *
 * Return: convetrted int integer
 */

int _atoi(char *s)
{
	int i, n, x, y, z, num;

	while (s[x] != '\0')
	{
		x++;
	}

	while (i < x && y == 0)
	{
		if (s[i] == '-')
		{
			++n;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (n % 2)
			{
				num = -num;
			}
			z = z * 10 + num;
			y = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
			i++;
		}
	}
	if (y == 0)
	{
		return (0);
	}
	return (n);
}
