#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This function prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
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
}
