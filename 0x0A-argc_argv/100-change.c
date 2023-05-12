#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entr point to function printing min number of coins
 * @argc: the size of inputs
 * @argv: array size arguments
 *
 * Return: 0 on success, 1 at error
 */

int main(int argc, char *argv[])
{
	int i, j, tot;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	tot = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= coin[j])
		{
			tot++;
			i -= coin[j];
		}
	}

	printf("%d\n", tot);
	return (0);
}
