#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by a new line
 * @separator: string being printed
 * @n: number of integers being printed
 * @...: infinite variables
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		printf("%d\n", va_arg(j, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(j);
}
