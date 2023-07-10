#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read the text file and print it
 * @filename: file being read
 * @letters: letters being read
 *
 * Return: the letter bein read on output
 * else 0 if NULL features
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t files, words, texts;
	char *c;

	files = open(filename, O_RDONLY);

	if (files == -1)
		return (0);

	c = malloc(sizeof(char) * letters);
	texts = read(files, c, letters);
	words = write(STDOUT_FILENO, c, texts);

	free(c);
	close(files);
	return (words);
}
