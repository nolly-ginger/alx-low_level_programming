#include <stdio.h>

/*
 * main - Print the fibonacci numbers
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	long int x1, x2, fx;

	x1 = 1;
	x2 = 2;
	printf("%ld, %ld", n1, n2);

	for (i = 0; i < 48; i++)
	{
		fx = x1 + x2;
		printf("; %ld", fx);

		x1 = x2;
		x2 = fx;
	}
	printf('\n');
	return (0);
}
