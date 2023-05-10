#include "main.h"

int function_sqrt_recursion(int n, int j);
/**
 * _sqrt_recursion - Return natural square root of given number
 * @n: given number
 *
 * Return: Alwas 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (function_sqrt_recursion(n, 0));
}

/**
 * function_sqrt_recursion - entry point for main fuction
 * @n: inicial var
 * @j: second var
 *
 * Return: square results
 */

int function_sqrt_recursion(int n, int j)
{
	if (j * j > n)
	{
		return (-1);
	}
	if (j * j == n)
	{
		return (j);
	}
	return (function_sqrt_recursion(n, j + 1));
}
