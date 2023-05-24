#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of own main function
 * @argv: array argumemts
 * @argc: number of array arguements
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *c;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);

	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	c = (char *)main;

	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%02hhx\n", c[i]);
			break;
		}
		printf("%02hhx ", c[i]);
	}
	return (0);
}
