#ifndef main_H
#define main_H

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

void print_alphabet(void);

void print_alphabet_x10(void);

int _islower(int c);

int _isalpha(int c);

int print_sign(int n);

int _abs(int);

int print_last_digit(int);

void jack_bauer(void);

void times_table(void);

int add(int, int);

void print_down_to_98(int n);

void print_up_to_98(int n);

void print_to_98(int n);

void print_times_table(int n);

void print_times_table_cell(int i, int j, int n);

void print_number(int n);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_fizz(void);

void print_buzz(void);

void print_fizz_buzz(void);

void print_number(int n);

#endif /* main_H */
