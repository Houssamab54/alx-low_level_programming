#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
  int is_leap;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
        if (year % 400 == 0) {
            // Leap year: divisible by 4, 100, and 400
            is_leap = 1;
        } else {
            // Not a leap year: divisible by 4 and 100, but not 400
            is_leap = 0;
        }
    } else {
        // Leap year: divisible by 4, but not 100
        is_leap = 1;
    }
} else {
    // Not a leap year: not divisible by 4
    is_leap = 0;
}
  if ( is_leap == 1)
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}
