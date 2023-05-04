#include "main.h"
#include <stdio.h>

/**
 * *rot13 - encode a string using rot13
 * @n: the string
 *
 * Return: n
 */

char *rot13(char *n)
{
	int i, j;
	char let1[] = "abcdefghijklmnopqrstvuwxyzABCDEFGHIJKLMNOPQRSTVUWXYZ";
	char let2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == let1[j])
			{
				n[i] = let2[j];
				break;
			}
		}
	}
	return (n);
}
