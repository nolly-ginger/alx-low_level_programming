#include "main.h"

/**
 * *leet - encode a string into 1337
 * @x: the input string
 *
 * Return: x
 */

char *leet(char *x)
{
	int i, j;
	char set[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == set[j])
			{
				x[i] = num[j];
			}
		}
	}
	return (x);
}
