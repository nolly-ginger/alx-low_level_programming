#include "main.h"

/**
 * *cap_string - capitalize all words of the string
 * @n: the characters to be capitalized
 *
 * Return: n
 */

char *cap_string(char *n)
{
	int i, j;
	int letters[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	if (*(n + i) >= 97 && *(n + i) <= 122)
		*(n + i) = *(n + i) - 32;
	i++;

	while (*(n + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(n + i) == letters[j])
			{
				if ((*(n + (i + 1)) >= 97) && (*(n + (i + 1)) <= 122))
					*(n + (i + 1)) = *(n + (i + 1)) - 32;
				break;
			}
		}
		i++;
	}
	return (n);
}

