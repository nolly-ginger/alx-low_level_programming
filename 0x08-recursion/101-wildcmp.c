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
	if (*s1 == *s2)
	{
		return (1);
	}
	else
		return (0);
}
