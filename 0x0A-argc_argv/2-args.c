#include <stdio.h>

/**
 * main - entry point of the given strins
 * @argc: size and command line of the inputs
 * @argv: array size and comman d line from argc
 *
 * Return: i, the iven string input
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
