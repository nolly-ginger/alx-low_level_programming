#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Return x raised by the power of y
 * @x: teh number beng returned
 * @y: the power of the number being returned
 *
 * Return: Always 0(Success)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		return (_pow_recursion(x, y - 1) * x);
}
