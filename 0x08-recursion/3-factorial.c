#include "main.h"

/**
 * factorial - Print the factorial of the given number
 * @n: the number
 *
 * Return: -1 if the factorial is < 0, else 1
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (-1);
	}
}
