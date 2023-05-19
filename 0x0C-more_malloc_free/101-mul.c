#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * _is_zero - determine whether the number is zero
 * @argv: arguments
 *
 * Return: void
 */

void _is_zero(char *argv[])
{
	int i, j, k;

	j = 1;
	k = 1;

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] != '0')
		{
			j = 0;
			break;
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] != '0')
		{
			k = 0;
			break;
		}
	}
	if (k == 1 || j == 1)
	{
		printf("0\n");
		exit(0);
	}
}

/**
 * initialize_array - ser\t new memory of array
 * @list: array
 * @len: length of array
 *
 * Return: array pointer
 */

char *initialize_array(char *list, int len)
{
	int i = 0;

	for (i = 0; i < len; i++)
		list[i] = '0';

	list[len] = '\0';
	return (list);
}

/**
 * numberIs - check length of the number
 * @argv: argument
 * @nr: rows in array
 *
 * Return: length of num
 */

int numberIs(char *argv[], int nr)
{
	int i;

	for (i = 0; argv[nr][i]; i++)
	{
		if (!isdigit(argv[nr][i]))
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (i);
}

/**
 * main - Entry point.
 * program that multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: arguments vector.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int ln1, ln2, lnout, add, addl, i, j, k, ca;
	char *nout;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	ln1 = numberIs(argv, 1);
	ln2 = numberIs(argv, 2);
	_is_zero(argv);
	lnout = ln1 + ln2;
	nout = malloc(lnout + 1);

	if (nout == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	nout = initialize_array(nout, lnout);
	k = lnout - 1;
	i = ln1 - 1;
	j = ln2 - 1;
	ca = addl = 0;

	for (; k >= 0; k--, i--)
	{
		if (i < 0)
		{
			if (addl > 0)
			{
				add = (nout[k] - '0') + addl;

				if (add > 9)
				{
					nout[k - 1] = (add / 10) + '0';
				}
				nout[k] = (add % 10) + '0';
			}
			i = ln1 - 1;
			j--;
			addl = 0;
			ca++;
			k = lnout - (1 + ca);
		}
		if (j < 0)
		{
			if (nout[0] != '0')
				break;
			lnout--;
			free(nout);
			nout = malloc(lnout + 1);
			nout = initialize_array(nout, lnout);
			k = lnout - 1;
			i = ln1 - 1;
			j = ln2 - 1;
			ca = addl = 0;
		}
		if (j >= 0)
		{
			add = ((argv[1][i] - '0') * (argv[2][j] - '0')) + (nout[k] - '0') + addl;
			addl = (add / 10);
			nout[k] = ((add % 10) + '0');
		}
	}
	printf("%s\n", nout);
	return (0);
}
