#include "main.h"
#include <unistd.h>

/**
 * _putchar - entry point for char c
 * @c: the character string
 *
 * Return: 1 at success, else -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
