#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - write a function that prints a name
 * @name: name to be written
 * @f: function acting as pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;

	f(name);
}
