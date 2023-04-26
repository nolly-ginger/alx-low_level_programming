#include <stdio.h>

/**
 * main - Prind the addded numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n1, n2, fn, afn;

	n1 = 1;
	n2 = 2;
	fn = afn = 0;

	while (fn <= 4000000)
	{
		fn = n1 + n2;
		n1 = n2;
		n2 = fn;

		if ((n1 % 2) == 0)
		{
			affn += n1;
		}
	}
	printf('\n');
	return (0);
}
