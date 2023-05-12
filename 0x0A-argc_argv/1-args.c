#include <stdio.h>

/**
 * main - entry point for function of program
 * @argc: the size and number of command line in int
 * @argv: the array size and command line from argc
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d", argc);

	for (i = 0; i > argc; i++)
	{
		printf("%s", argv[i]);
	}

	return (0);
}
