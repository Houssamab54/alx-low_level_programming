#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: This function prints "_putchar" followed by a new line.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
int i;
for (i = 'a' ; i <= 'z' ; i++)
{
_putchar(i);
}
_putchar('\n');
}
