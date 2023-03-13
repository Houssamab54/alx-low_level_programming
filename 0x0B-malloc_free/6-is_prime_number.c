#include "main.h"

/**
 * is_prime_number - Checks if a given integer is a prime number.
 *
 * @n: The integer to check.
 *
 * Return: 1 if the integer is a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}

/**
 * is_prime - Recursively checks if a given integer is a prime number.
 *
 * @n: The integer to check.
 * @i: The divisor to check against.
 *
 * Return: 1 if the integer is a prime number, 0 otherwise.
 */

int is_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (n % i == 0 && i < n)
		return (0);
	if (i == n)
		return (1);
	return (is_prime(n, i + 1));
}
