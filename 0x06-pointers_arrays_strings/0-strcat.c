#include "main.h"
#include <string.h>

/**
 * *_strcat - entry point to concatenate the two given strings
 * @src: the first string
 * @dest: the second string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
