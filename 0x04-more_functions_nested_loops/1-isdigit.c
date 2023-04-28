#include <stdio.h>

/**
 * _isdigit - enetry point for digits between 0 and 9
 * @c: will be the digit input
 *
 * Return: 1 for digits within parameter, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);

	else
		return (0);
}
