#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "main.h"
#include "function_pointers.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on wrong number of arguments, 99 on invalid operator,
 *         100 on division/modulo by 0.
 */
int main(int argc, char *argv[])
{
    int a, b, result;
    char *operator;
    int (*op_func)(int, int);

    if (argc != 4)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (98);
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);
    operator = argv[2];

    op_func = get_op_func(operator);

    if (op_func == NULL)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (99);
    }

    if ((*operator == '/' || *operator == '%') && b == 0)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return (100);
    }

result = op_func(a, b);
 _putchar(result);
 _putchar('\n');
 printf("rrr");
return (0);
}
