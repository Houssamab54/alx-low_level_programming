#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
print_fizz_buzz();
}
else if (i % 3 == 0)
{
print_fizz();
}
else if (i % 5 == 0)
{
print_buzz();
}
else
{
print_number(i);
}
if (i != 100)
_putchar(' ');
}
_putchar('\n');
return (0);
}
/**
 * print_fizz - Prints "Fizz" for multiples of 3
 */

void print_fizz(void)
{
int i = 0;
char str[] = "Fizz";
for (i = 0; i < 4; i++)
_putchar(str[i]);
}

/**
 * print_buzz - Prints "Buzz" for multiples of 5
 */

void print_buzz(void)
{
int i = 0;
char str[] = "Buzz";
for (i = 0; i < 4; i++)
_putchar(str[i]);
}

/**
 * print_fizz_buzz - Prints "FizzBuzz" for multiples of 3 and 5
 */

void print_fizz_buzz(void)
{
int i = 0;
char str[] = "FizzBuzz";
for (i = 0; i < 8; i++)
_putchar(str[i]);
}

/**
 * print_number - Prints an integer
 *
 * @n: Number to print
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
print_number(num / 10);
_putchar((num % 10) + '0');
}
