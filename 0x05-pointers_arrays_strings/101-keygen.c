#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point for generating a password for a program
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int pass[100];
	int i, x, sum;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			x = 2772 - sum - '0';
			sum += x;
			putchar(x + '0');
			break;
		}
	}

	return (0);
}
