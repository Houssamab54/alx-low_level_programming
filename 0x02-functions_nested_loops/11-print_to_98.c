#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Makes the sum of two numbers
 * @n: First operand
 *
 * Return: The sum of the two parameters
 */
void print_to_98(int n)
{
int j, i;
if (n < 98)
{
for (j = n ; j <= 98; j++)
{
if (j < 10)
{
if (j < 0)
{
i = - j;
_putchar('-');
_putchar(i + '0')
}
else
{
_putchar(j + '0');
}
}
else
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
}
if (j != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
if (n > 98)
{
for (j = n ; j >= 98; j--)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
if (j != 98)
{
_putchar(',');
_putchar(' ');
}
else
{
_putchar('\n');
}
}
}
if (n == 98)
{
_putchar(j / 10 + '0');
_putchar(j % 10 + '0');
_putchar('\n');
}
}
