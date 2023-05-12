#include <stdio.h>

/**
 * main - entry point for function of program
 * @argc: the size and number of command line in int
 * @argv: array size being input
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
