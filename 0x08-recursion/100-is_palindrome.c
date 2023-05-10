#include "main.h"

int palindrome(char *s, int i, int j);
int string(char *s);

/**
 * is_palindrome - State whether a string is palindrome or not
 * @s: the string
 *
 * Return: 1 i palindrome, else 0
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrome(s, 0, string(s)));
}

/**
 * string - gives the length of the string
 * @s: string
 *
 * Return: string length
 */

int string(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + string(s + 1));
}

/**
 * palindrome - describes the palindrome
 * @s: string
 * @i: gives function of string
 * @j: gives lenth of string
 *
 * Return: 1 if palindrome, else 0
 */

int palindrome(char *s, int i, int j)
{
	if (*(s + i) != *(s + j - 1))
	{
		return (0);
	}
	if (i >= j)
	{
		return (1);
	}
	return (palindrome(s, i + 1, j - 1));
}
