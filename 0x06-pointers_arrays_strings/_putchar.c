#include <unistd.h>

/**
 * _putchar - charater that will be put in with n
 * @n: character to be printed
 *
 * Return 1 on success, and -1 on error
 */

int _putchar(char n)
{
	return (write(1, &n, 1));
}
