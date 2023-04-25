#include <unistd.h>
#include "main.h"

/**
 * _putchar - what we will use to write different characters as outputs
 * @c: this will be our character to print
 *
 * Return: 1 (Success)
 * However, on error it can be -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
