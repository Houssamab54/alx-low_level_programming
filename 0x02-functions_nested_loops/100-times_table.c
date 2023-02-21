#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the times table to print
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
			print_times_table_cell(i, j, n);

		_putchar('\n');
	}
}

/**
 * print_times_table_cell - prints a cell in the times table
 * @i: the row index
 * @j: the column index
 * @n: the size of the times table
 */
void print_times_table_cell(int i, int j, int n)
{
	int product = i * j;

	if (j == 0)
	{
		print_number(product);
	}
	else
	{
		_putchar(' ');
		print_number(product);
	}

	if (j < n)
		_putchar(',');
}

/**
 * print_number - prints a number
 * @n: the number to print
 */
void print_number(int n)
{
	if (n >= 100)
	{
		_putchar(n / 100 + '0');
		_putchar((n / 10) % 10 + '0');
		_putchar(n % 10 + '0');
	}
	else if (n >= 10)
	{
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
}
