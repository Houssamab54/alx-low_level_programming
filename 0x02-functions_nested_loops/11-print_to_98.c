#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
int j, i;
for (i = n; i <= 98; i++)
{
j = i;
if (i < 0)
{
_putchar('-');
i *= -1;
}
if (i < 10)
{
_putchar(i + '0');
}
else if (i < 100)
{
_putchar(i / 10 + '0');
_putchar(i % 10 + '0');
}
else
{
_putchar(i / 100 + '0');
_putchar(i % 100 / 10 + '0');
_putchar(i % 10 + '0');
}
if (i < 98 && j > 0)
{
_putchar(',');
_putchar(' ');
}
i = j;
}
_putchar('\n');
}
