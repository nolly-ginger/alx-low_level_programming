#include <stdlib.h>
#include "main.h"

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
	unsigned int i, j, k, m;

	i = 0;
	j = 0;
	k = 0;
	m = 0;

	while (s1 && s1[k])
		k++;
	while (s2 && s2[m])
		m++;
	if (n < k)
		sentence = (char *) malloc(sizeof(char) * (k + n + 1));
	else
		sentence = (char *) malloc(sizeof(char) * (k + m + 1));

	if (!sentence)
		return (NULL);

	while (i < k)
	{
		sentence[i] = s1[i];
		i++;
	}

	while (n < m && i < (k + n))
		sentence[i++] = s2[j++];
	while (n >= m && i < (k + m))
		sentence[i++] = s2[j++];

	sentence[i] = '\0';

	free(sentence);
	return (sentence);
}
