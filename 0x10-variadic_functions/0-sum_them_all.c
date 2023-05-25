#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - return sum of all paranthesis
 * @n: paranthesis of program
 * @...: sum of infinate variables
 *
 * Return: sum of paranthesis
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list j;

	va_start(j, n);

	sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(j, int);
	}
	va_end(j);
	return (sum);
}
