#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This function prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;
for (j = 'a' ; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
_putchar('\n');
}
}
return (0);
}
