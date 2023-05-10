#include "main.h"

int prime_numbers(int n, int i);

/**
 * is_prime_number - entry point to show if number is prme number
 * @n: input integer
 *
 * Return: 1 if prime number, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_numbers(n, n - 1));
}
/**
 * prime_numbers - entry point of primes
 * @n: the number imput
 * @i: inspector factor
 *
 * Return: 1 for prime number, else 0
 */

int prime_numbers(int n, int i)
{
	if (i == 0)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_numbers(n, i - 1));
}
