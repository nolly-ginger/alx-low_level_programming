#include <stdio.h>

/**
 * main - entry point for code function printing its name
 * @argc: the sicze and number of command lines in int
 * @argv: arry size and command line of agrc
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
