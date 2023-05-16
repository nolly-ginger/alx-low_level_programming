#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenate all the arguments of the program
 * @ac: arguments
 * @av: concatenation of arguments
 *
 * Return: Always 0 (Success)
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *prop;

	k = 0;
	l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	prop = malloc(sizeof(char) * l + 1);
	if (prop == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			prop[k] = av[i][j];
			k++;
		}
		if (prop[k] == '\0')
		{
			prop[k++] = '\n';
		}
	}
	return (prop);
}
