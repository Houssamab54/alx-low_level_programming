#ifndef variadic_functions_H
#define variadic_functions_H

#include <unistd.h>
#include "dog.h"
#include <stdarg.h>

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c);

void _puts_recursion(char *s);

void _print_rev_recursion(char *s);

void *malloc_checked(unsigned int b);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

int sum_them_all(const unsigned int n, ...);

char *string_nconcat(char *s1, char *s2, unsigned int n);

void *_calloc(unsigned int nmemb, unsigned int size);

int *array_range(int min, int max);

int _strlen(char *s);

int _strlen_recursion(char *s);

void init_dog(struct dog *d, char *name, float age, char *owner);

char *create_array(unsigned int size, char c);

char *str_concat(char *s1, char *s2);

int wildcmp(char *s1, char *s2);

int **alloc_grid(int width, int height);

int _isdigit(int c);

int mul(int a, int b);

void print_most_numbers(void);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_fizz(void);

void print_buzz(void);

void print_fizz_buzz(void);

void reset_to_98(int *n);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

void reverse_array(int *a, int n);

char *string_toupper(char *);

char *cap_string(char *);

char *leet(char *);

#endif /* variadic_functions_H */
