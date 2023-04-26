#include <stdio.h>

/*
 * main - Print first 50 Fibonacci numbers
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i;
	unsigned long x1 = 1, x2 = 2, sum;

	for (i = 0; i < 48; i++)
	{
		sum = x1 + x2;
		printf("%lu", sum);

		x1 = x2;
		x2 = sum;

		if (1 == 49)
		{
			printf('\n');
		}
		else
		{
			printf(",");
		}
	}
	return (0);
}
