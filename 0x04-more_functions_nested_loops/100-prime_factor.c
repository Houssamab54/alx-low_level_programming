#include <stdio.h>

/**
 * main - prints the largest prime factor of the number 612852475143,
 *        followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n, div;

    n = 612852475143;
    div = 2;

    while (n != 0)
    {
        if (n % div != 0)
            div++;
        else
        {
            n /= div;
            if (n == 1)
            {
                printf("%lu\n", div);
                break;
            }
        }
    }

    return (0);
}
