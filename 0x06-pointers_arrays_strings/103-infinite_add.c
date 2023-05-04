#include "main.h"
#include <stdio.h>

/**
 * *infinite_add - entr point
 * @n1: num 1
 * @n2: num2
 * @r: function buffer
 * @size_r: buffer size
 *
 * Return: nums returned
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, x, y, z, a, num = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	if (i >= j)
		y = i;
	else
		y = j;
	if (size_r <= y + 1)
		return (0);
	r[y + 1] = '\0';
	i--, j--, size_r--;
	z = *(n1 + i) - 48, a = *(n2 + j) - 48;
	while (y >= 0)
	{
		x = z + a + num;
		if (x >= 10)
			num = x / 10;
		else
			num = 0;
		if (x > 0)
			*(r + y) = (x % 10) + 48;
		else
			*(r + y) = '0';
		if (i > 0)
			i--, z = *(n1 + i) - 48;
		else
			z = 0;
		if (j > 0)
			j--, a = *(n2 + j) - 48;
		else
			a = 0;
		y--, size_r--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
