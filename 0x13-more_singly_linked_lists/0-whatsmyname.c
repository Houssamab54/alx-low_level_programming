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
(void)argc; /* unused parameter */
printf("%s\n", argv[0]);
return (EXIT_SUCCESS);
}
