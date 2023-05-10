#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Return natural square root of given number
 * @n: given number
 *
 * Return: Alwas 0(Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt_recursion(n * 1));
}
