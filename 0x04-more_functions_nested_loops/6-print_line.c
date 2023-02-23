#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal using the _ character
 *
 * @n: The number of times the _ character should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
