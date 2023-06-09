#include <stdio.h>

/**
 * main - Print first 98 numbers
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int i, boolean1, boolean2;
	long int n1, n2, fn1, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean1 = boolean2 = 1;
	printf("%lu, %lu", n1, n2);
	for (i = 2; i < 98; i++)
	{
		if (boolean1)
		{
			fn1 = n1 + n2;
			printf(", %lu", fn1);
			n1 = n2;
			n2 = fn1;
		}
		else
		{
			if (boolean2)
			{
				n11 = n1 % 1000000000;
				n22 = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = (n11 + n22);
			fn1 = n1 + n2 + (fn2 / 1000000000);
			printf(", %lu", fn1);
			printf("%lu", fn2 % 1000000000);
			n1 = n2;
			n11 = n22;
			n2 = fn1;
			n22 = (fn2 % 1000000000);
		}
		if (((n1 + n2) < 0) && boolean1 == 1)
			boolean1 = 0;
	}
	printf("int\n");
	return (0);
}
