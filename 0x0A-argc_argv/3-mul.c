#include <stdio.h>
#include "main.h"

/**
 * multiplication - entry point for the mul function
 * @s: entr character
 *
 * Return: the totalof the mul
 */

int multiplication(char *s)
{
	int a, b, c, d, e, f;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	e = 0;
	f = 0;

	while (s[d] != '\0')
	{
		d++;
	}
	while (a < d && e == 0)
	{
		if (s[a] == '-')
			b++;
		if (s[a] >= '0' && s[a] <= '9')
		{
			f = s[a] - '0';
			if (b % 2)
				f = -f;
			c = c * 10 + f;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);

	return (c);
}

/**
 * main - entry point for mul of two numbers
 * @argc: the size and command line of inputs
 * @argv: the array size and command line from argc
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int num1, num2, tot;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = multiplication(argv[1]);
	num2 = multiplication(argv[2]);
	tot = num1 * num2;

	printf("%d\n", tot);

	return (0);
}
