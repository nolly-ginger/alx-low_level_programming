#include "main.h"

/**
 * *_memset - entry point to fill memory with constant byte
 * @s: byte 1
 * @b: byte 2
 * @n: function to be filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
