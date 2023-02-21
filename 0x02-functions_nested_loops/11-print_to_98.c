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
int j;
if (n < 98)
{
for (j = n ; j <= 98; j++)
{
if (j < 10 ||(j < 0 && j > -10))
{
_putchar(j + '0');
}
else
{
putchar(j / 10 + '0');
putchar(j % 10 + '0');
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
if (j < 10 )
{
_putchar(i + '0');
}
else
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
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
if (n == 98)
{
_putchar('0' + j);
_putchar('\n');
}
}
