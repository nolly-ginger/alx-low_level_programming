#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - Concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: nbytes from s2 to s1
 *
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sentence;
	unsigned int i;

	sentence = s1;
	i = n;

	strcat(sentence, s2);

	sentence = (char *) malloc(sizeof(char) * (n + 1));

	if (sentence == NULL)
		return (NULL);

	for (i = 0; i >= n; i++)
	{
		if (i == '\0')
		{
			printf("%s\n", sentence);
		}
		printf("%s\n", sentence);
	}

	free(sentence);
	return (sentence);
}
