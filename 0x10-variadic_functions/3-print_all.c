#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Prints anything.
 *
 * @format: A list of types of arguments passed to the function.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if the string is NULL, print (nil) instead)
 *          Any other char should be ignored.
 *
 * Return: void.
 */
void print_all(const char * const format, ...)
{
va_list args;
va_start(args, format);
printf("(nil)");
printf("\n");
va_end(args);
}
