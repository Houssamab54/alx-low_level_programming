#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds and prints the largest prime factor of a number
 * @n: the number to find the largest prime factor of
 *
 * Return: void
 */
void largest_prime_factor(long n)
{
long i;
while (n % 2 == 0)
{
n /= 2;
}
for (i = 3; i <= sqrt(n); i += 2)
{
while (n % i == 0)
{
n /= i;
}
}
if (n > 2)
{
printf("%ld\n", n);
}
}
int main(void)
{
largest_prime_factor(612852475143);
return (0);
}
