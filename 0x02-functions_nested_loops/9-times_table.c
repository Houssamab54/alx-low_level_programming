#include <stdio.h>
#include "main.h"

/**
 * times_table - Makes the sum of two numbers
 *
 * Return: The sum of the two parameters
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
k = i * j;
if(k < 9)
{
putchar('0'+k);
}
else
{
putchar('0' + k / 10);
putchar('0' + k % 10);
}
if (j != 9)
{
putchar(',');
putchar(' ');
}
else 
{
putchar('$');
putchar('\n');
}
}
}
}
