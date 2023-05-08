#include "main.h"

/**
 * *_strchr - entry point to funtion locating a character in string
 * @s: the string
 * @c: the character being located
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
