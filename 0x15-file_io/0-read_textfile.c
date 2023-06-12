#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Read text file and reads it to POSIX output
 * @filename: pointer of the filename character
 * @letters: number of the letters printed
 *
 * Return: text file data printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *c;

	if (filename == NULL)
		return (0);

	x = open(filename, O_RDONLY);

	if (x == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	y = read(x, c, letters);
	z = write(STDOUT_FILENO, c, y);

	free(c);
	close(x);
	return (z);
}
