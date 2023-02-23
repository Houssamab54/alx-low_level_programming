#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}

/**
 * fizzbuzz - prints Fizz, Buzz, or FizzBuzz
 * @i: The number to check
 */
void fizzbuzz(int i)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else if (i % 3 == 0)
	{
		_putchar('F');
		_putchar('i');
		_putchar('z');
		_putchar('z');
	}
	else if (i % 5 == 0)
	{
		_putchar('B');
		_putchar('u');
		_putchar('z');
		_putchar('z');
	}
	else
	{
		print_number(i);
	}
}

/**
 * print_fizzbuzz - prints numbers 1 to 100, replaples of 3 with Fizz,
 * multiples of 5 with Buzz, and multiples of both with FizzBuzz
 */
void print_fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		fizzbuzz(i);
		if (i != 100)
		{
			_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
}
