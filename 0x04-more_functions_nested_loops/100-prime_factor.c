#include <stdio.h>

/**
 * main - Print highest prine factor of given number
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	long int i, j;

	i = 612852475143;
	for (j = 2; j <= i; j++)
	{
		if (i % j == 0)
		{
			i /= j;
			j--;
		}
	}
	printf("%ld\n", j);
	return (0);
}
