#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1 concatenated with s2
 */

char *str_concat(char *s1, char *s2)
{
	char *sent;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	sent = malloc(sizeof(char) * (i + j + 1));

	if (sent == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		sent[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		sent[i] = s2[j];
		i++, j++;
	}

	sent[i] = '\0';
	return (sent);
}
