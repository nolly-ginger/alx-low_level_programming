#include "main.h"

/**
 * _strlen - entry point to return length of a string
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
