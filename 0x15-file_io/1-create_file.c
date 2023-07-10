#include "main.h"

/**
 * create_file - create file
 * @filename: file name of created file
 * @text_content: whatthe file contains
 *
 * Return: --1 if function fails, else -1
 */

int create_file(const char *filename, char *text_content)
{
	int file, word, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	word = write(file, text_content, length);

	if (file ==  -1 || word == -1)
		return (-1);

	close(file);

	return (1);
}
