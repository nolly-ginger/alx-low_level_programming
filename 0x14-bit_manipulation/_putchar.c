#include "main.h"
#include <unistd.h>

/**
 * _putchar - Entry point for char c
 * @c: character being evaluated
 *
 * Return: 1 on Success, else 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
