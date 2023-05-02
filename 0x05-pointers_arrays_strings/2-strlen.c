#include "main.h"
#include <string.h>

/**
 * _strlen - entry point to return length of a string
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	len = strlen(s);
	printf("%d", len);
	return (*s);
}
