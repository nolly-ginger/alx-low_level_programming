#include <stdio.h>

/**
 * main - Print the first 50 numbers of Fibonacii starting from 1 and 2
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 1; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
