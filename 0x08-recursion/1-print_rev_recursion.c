#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: the string
 *
 * Retrun: null
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	puts(s);
	-- s;

	if (i > 0)
	{
		puts(" ");
	}
	else
	{
		puts(s);
	}
}
