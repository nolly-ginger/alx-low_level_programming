#include "main.h"
#include <unistd.h>

/**
 * _putchar: entry point for the characters
 * @c: character values
 *
 * Return: 1 for success else return -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
