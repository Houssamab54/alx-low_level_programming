#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - returns the sum of all its parameters
 * @separator: number of arguments
 * @n: number of arguments
 * Return: sum of all parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
int num;
va_start(args, n);
for (i = 0; i < n; i++)
{
num = va_arg(args, int);
printf("%d", num);
if (i < n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
printf("\n");
va_end(args);
}
