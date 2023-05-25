#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - print the string followed by a new line
 * @separator: string to be printed
 * @n: nuber of strings
 * @...: infinite variable set
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list j;
	unsigned int i;
	char *strin;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		strin = va_arg(j, char *);
		if (separator == NULL)
			printf("nil");
		else
			printf("%s", strin);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(j);
}
