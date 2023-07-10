#include "main.h"

/**
 * append_text_to_file - append texts at the end of the file
 * @filename: the file being appended
 * @text_content: text being appended at the end of file
 *
 * Return: the appended text at the end of the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, words, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	words = write(i, text_content, length);

	if (i == -1 || words == -1)
		return (-1);

	close(i);

	return (1);
}
