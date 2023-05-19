#include <unistd.h>

/**
 * _putchar - entry point to check c
 * @c: the value
 *
 * Return: 1 on Success and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
