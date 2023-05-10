#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Retur the length of teh string
 * @s: the string
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}

	return (i);
}
