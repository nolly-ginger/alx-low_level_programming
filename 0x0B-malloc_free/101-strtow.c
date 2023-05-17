#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * words - split the string  into words
 * @x: the string being split
 *
 * Return: the split string
 */

char words(char *x)
{
	int i, j, k;

	i = 0;
	j = 0;

	for (k = 0; x[k] != '\0'; k++)
	{
		if (x[k] == ' ')
		{
			i = 0;
		}
		else if (i == 0)
		{
			i = 1;
			j = 0;
		}
	}
	return (j);
}

/**
 * **strtow - split the string  into words
 * @str: the string
 *
 * Return: the split string
 */

char **strtow(char *str)
{
	char **y, *m;
	int r, count, begin, finish;
	int p = 0;
	int l = 0;
	int t = 0;

	while (*(str + l))
		l++;

	count = words(str);

	if (count == 0)
		return (NULL);
	y = (char **) malloc(sizeof(char *) * (count + 1));
	if (y == NULL)
		return (NULL);
	for (r = 0; r <= l; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (t)
			{
				finish = r;
				m = (char *) malloc(sizeof(char) * (t + 1));
				if (m == NULL)
					return (NULL);

				while (begin < finish)
					*m++ = str[begin++];
				*m = '\0';
				y[p] = m - t;
				p++;
				t = 0;
			}
		}
		else if (t++ == 0)
			begin = r;
	}
	y[p] = NULL;
	return (y);
}
