#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - check if the given year is a leap year
 * @year: the year to check
 *
 * Return: 1 if the year is a leap year, otherwise 0
 */
int is_leap_year(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				return 1;
			}
			return 0;
		}
		return 1;
	}
	return 0;
}

/**
 * days_in_month - get the number of days in a given month
 * @month: the month to get the number of days for
 * @year: the year to check if the month is February
 *
 * Return: the number of days in the given month
 */
int days_in_month(int month, int year)
{
	int days = 0;

	switch (month)
	{
	case 2:
		days = 28 + is_leap_year(year);
		break;
	case 4:
	case 6:
	case 9:
	case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}

	return days;
}

/**
 * print_remaining_days - print the number of days remaining in the year
 * @month: the current month
 * @day: the current day of the month
 * @year: the current year
 */
void print_remaining_days(int month, int day, int year)
{
	int day_of_year = 0;
	for (int i = 1; i < month; i++)
	{
		day_of_year += days_in_month(i, year);
	}
	day_of_year += day;

	int days_remaining = 365 + is_leap_year(year) - day_of_year;
	if (days_remaining == 1)
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining day: %d\n", days_remaining);
	}
	else
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", days_remaining);
	}

	if (month == 2 && day == 29 && !is_leap_year(year))
	{
		printf("Warning: Invalid date - this is not a leap year!\n");
	}
}
