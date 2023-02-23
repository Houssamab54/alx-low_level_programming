#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#endif /* MAIN_H */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i;

        for (i = 1; i <= 100; i++)
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
                        _putchar(' ');
                }
                else if (i % 3 == 0)
                {
                        _putchar('F');
                        _putchar('i');
                        _putchar('z');
                        _putchar('z');
                        _putchar(' ');
                }
                else if (i % 5 == 0)
                {
                        _putchar('B');
                        _putchar('u');
                        _putchar('z');
                        _putchar('z');
                        _putchar(' ');
                }
                else
                {
                        int j = i;
                        int digit;

                        if (j < 0)
                        {
                                _putchar('-');
                                j = -j;
                        }
                        digit = j / 10;
                        if (digit != 0)
                        {
                                _putchar('0' + digit);
                        }
                        _putchar('0' + j % 10);
                        _putchar(' ');
                }
        }
        _putchar('\n');

        return (0);
}
