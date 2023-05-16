#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * **strtow - split the string  into words
 * @str: the string
 *
 * Return: the split string
 */

char **strtow(char *str)
{
	int i = 0;
	int x = 0;
	int z = 0;
	int j, y;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (j = 0; str[j] != '\0'; j++)
	{
		if (((j > 0) && (str[j - 1] != ' ')) || (str[j] != ' '))
		{
			i++;
		}
	}

	words = malloc(sizeof(char *) * (i + 1));

	for (j = 0; str[j] != '\0'; j++)
	{
		if (((j > 0) && str[j - 1] == ' ') || x == 0)
		{
			x = j;
		}
		else if (str[j + 1] == '\0' || str[j + 1] == ' ')
		{
			y = j + 1;
			words[j] = malloc((y + x) + 1);
			memcpy(words[z], &(str[x]), ((y - x)));
			words[z][((y - x))] = '\0';
			z++;
		}
	}
	words[i] = NULL;
	return (words);
}
