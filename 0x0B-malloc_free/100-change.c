#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int count_coins(int cents);

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents, coins;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
coins = count_coins(cents);
printf("%d\n", coins);
return (0);
}

/**
 * count_coins - count the minimum number of coins required to make change
 * @cents: the amount of change in cents
 *
 * Return: the minimum number of coins required
 */
int count_coins(int cents)
{
int coins = 0;
if (cents < 0)
{
return (0);
}
while (cents >= 25)
{
coins++;
cents -= 25;
}
while (cents >= 10)
{
coins++;
cents -= 10;
}
while (cents >= 5)
{
coins++;
cents -= 5;
}
while (cents >= 2)
{
coins++;
cents -= 2;
}
while (cents >= 1)
{
coins++;
cents--;
}
return (coins);
}
