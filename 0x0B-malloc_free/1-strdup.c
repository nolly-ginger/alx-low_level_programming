#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - return pointer to new memory space
 * with copy of the string given as a parameter
 * @str: the string
 *
 * Return: NULL if str is 0
 */

char *_strdup(char *str)
{
	char *dup;
	int i, j;

	j = 0;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	dup = malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);

	for (j = 0; str[j]; j++)
		dup[j] = str[j];
	dup[j] = '\0';

	return (dup);
}
