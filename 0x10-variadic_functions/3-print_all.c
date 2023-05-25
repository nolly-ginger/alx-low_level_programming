#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Print anything given
 * @...: infinite variables
 * @format: list of variables possible to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *c, *pep = "";
	va_list j;

	va_start(j, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", pep, va_arg(j, int));
					break;
				case 'i':
					printf("%s%d", pep, va_arg(j, int));
					break;
				case 'f':
					printf("%s%f", pep, va_arg(j, double));
					break;
				case 's':
					c = va_arg(j, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", pep, c);
					break;
				default:
					i++;
					continue;
			}
			pep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(j);
}
