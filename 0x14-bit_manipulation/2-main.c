#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Priompiled from, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
int i = 0;
char filename[] = __FILE__;
while (filename[i] != '\0')
{
putchar(filename[i]);
i++;
}
putchar('\n');
return (0);
}
