#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Create a function that creates a file
 * @filename: the pointer to the file names
 * @text_content: character numbers that will be printed
 *
 * Return:  the new file created
 */

int create_file(const char *filename, char *text_content)
{
	int i = 0, j, k;

	if (filename == NULL)
		return (-1);

	j = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (j == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i]; i++)
			;
		k = write(j, text_content, i);
		if (k == -1)
			return (-1);
	}
	close(j);
	return (1);
}
