#include <unistd.h>

/**
 * _putchar: input and output of character c
 * @c: the character to be printed
 *
 * Return: Is 1 for a seccess, else it wil be -1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
