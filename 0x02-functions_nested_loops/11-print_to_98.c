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
int i, j;
if (n < 98)
{
for (j = n ; j <= 98; j++)
{
_putchar('0' + j);
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
_putchar('0' + j);
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
