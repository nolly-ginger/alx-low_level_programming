#include "main.h"
#include <unistd.h>

/**
 * _putchar - entry point for code
 * @c: will represent all input characers
 *
 * Return:1 (Success)
 * On error, -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
