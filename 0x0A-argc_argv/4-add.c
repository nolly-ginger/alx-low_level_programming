#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * pos_num - chech for positive characters
 * @s: the characters
 *
 * Return: Always 0(Success)
 */

int pos_num(char *s)
{
	unsigned int i;

	i = 0;

	while (i < strlen(s))
	{
		if (!isdigit(s[i]))
			return (0);

		i++;
	}

	return (1);
}

/**
 * main - entry point to chech string for digits
 * @argc: size of inputs
 * @argv: array of the arguments
 *
 * Return: Always 0(Success)
 */

int main(int argc, char *argv[])
{
	int a, b, c;

	a = 1;

	while (a < argc)
	{
		if (pos_num(argv[a]))
		{
			b = atoi(argv[a]);
			c += b;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		a++;
	}
	printf("%d\n", c);

	return (0);
}
