#include "main.h"

/**
 * wildcmp - Compare two strings and show whether they are dentcal or not
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if identical and 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}

	else if (*s2 == '*')
	{
		return ((wildcmp(s1 + 1, s2)) || (wildcmp(s1, s2 + 1)));
	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
