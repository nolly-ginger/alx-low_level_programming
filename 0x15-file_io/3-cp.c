#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Copy the contents of a file to another file
 * @argc: number of arguments passed
 * @argv: the pointter
 *
 * Return: number characters prnted withi the new file
 */

int main(int argc, char **argv)
{
	int i, j, k;
	char c[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((k = read(i, c, 1024)) > 0)
	{
		if (write(j, c, k) != k || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(i) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", i);
		exit(100);
	}
	if (close(j) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", j);
		exit(100);
	}
	return (0);
}
