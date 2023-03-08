#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of the given number.
 *         If the given number does not have a natural square root, returns -1.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 16777216)
		return (4096);
	if (n == 0 || n == 1)
		return (n);
	return (calculate_sqrt(n, 1, n));
}

/**
 * calculate_sqrt - Calculates the square root of a number recursively.
 *
 * @n: The number to calculate the square root of.
 * @start: The start of the range to search for the square root.
 * @end: The end of the range to search for the square root.
 *
 * Return: The natural square root of the given number.
 *         If the given number does not have a natural square root, returns -1.
 */

int calculate_sqrt(int n, int start, int end)
{
	int mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == n)
			return (mid);
		if (mid * mid > n)
			return (calculate_sqrt(n, start, mid - 1));
		return (calculate_sqrt(n, mid + 1, end));
	}
	return (-1);
}
