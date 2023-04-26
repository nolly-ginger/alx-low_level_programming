#include <stdio.h>

/**
 * main - print multiples of 3 and 5 under 1024
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int x, y;

	for (x = 1; x < 1024; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			y += x;
		}
	}
	printf("%d\n", y);
	return (0);
}
