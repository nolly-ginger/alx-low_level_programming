#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encode a string using rot13
 * @s: the string
 *
 * Return: s
 */

char *rot13(char *s)
{
	int i, j;

	char *let1 = "ABCDEFGHIJKLMNOPQRSTVUWXYZabcdefghijklmnopqrstvuwxyz";
	char *let2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let1[j] != '\0'; j++)
		{
			if (s[i] == let1[j])
			{
				s[i] = let2[j];
				break;
			}
		}
	}
	return (s);
}
