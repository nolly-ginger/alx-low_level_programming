#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - append a text at the end of a file
 * @filename: the pointer filename being used
 * @text_content: the charater number of the file
 *
 * Return: the file data that is ppended
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (k = 0; text_content[k]; k++)
			;

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, k);

	if (i == -1 || j == -1)
		return (-1);

	close(i);
	return (1);
}
