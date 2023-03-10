#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv; /* unused parameter */
return (EXIT_SUCCESS);
}
