#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: the string
 * @needle: substring
 *
 * Return: Always 0(Succes)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *i = needle;

		while (*k = *i && *i != '\0')
		{
			k++;
			i++;
		}
		if (*i == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
