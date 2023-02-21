#include "main.h"
#include <stdio.h>

void print_number(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n *= -1;
    }
    if (n < 10)
    {
        _putchar(n + '0');
    }
    else if (n < 100)
    {
        _putchar(n / 10 + '0');
        _putchar(n % 10 + '0');
    }
    else
    {
        _putchar(n / 100 + '0');
        _putchar(n % 100 / 10 + '0');
        _putchar(n % 10 + '0');
    }
}

void print_comma_space(void)
{
    _putchar(',');
    _putchar(' ');
}

void print_to_98(int n)
{
    int i;

    if (n <= 98)
    {
        for (i = n; i < 98; i++)
        {
            print_number(i);
            print_comma_space();
        }
    }
    else
    {
        for (i = n; i > 98; i--)
        {
            print_number(i);
            print_comma_space();
        }
    }
    print_number(98);
    _putchar('\n');
}
