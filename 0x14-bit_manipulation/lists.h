#ifndef main_H
#define main_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "dog.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}
list_t;

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
int n;
struct listint_s *next;
}
listint_t;

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

void print_before_main(void) __attribute__ ((constructor));

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

size_t print_listint(const listint_t *h);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);

size_t listint_len(const listint_t *h);

listint_t *add_nodeint(listint_t **head, const int n);

listint_t *reverse_listint(listint_t **head);

listint_t *add_nodeint_end(listint_t **head, const int n);

void free_listint(listint_t *head);

void free_listint2(listint_t **head);

int pop_listint(listint_t **head);

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);

int sum_listint(listint_t *head);

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);

int delete_nodeint_at_index(listint_t **head, unsigned int index);

void _print_rev_recursion(char *s);

void *malloc_checked(unsigned int b);

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

void free_grid(int **grid, int height);

char *_strdup(char *str);

int factorial(int n);

int _pow_recursion(int x, int y);

int _sqrt_recursion(int n);

int is_palindrome(char *s);

int check_palindrome(char *s, int start, int end);

int is_prime_number(int n);

int calculate_sqrt(int n, int start, int end);

void set_string(char **s, char *to);

int is_prime(int n, int i);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

int _strlen(char *s);

void _puts(char *str);

void print_rev(char *s);

void rev_string(char *s);

void puts2(char *str);

void puts_half(char *str);

void print_array(int *a, int n);

char *_strcpy(char *dest, char *src);

void swap_int(int *a, int *b);

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

#endif /* main_H */
