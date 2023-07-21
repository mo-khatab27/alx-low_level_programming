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
	int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day_of_year;
	int i;

	if (day > days_in_month[month - 1])
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}

	if (month == 2 && day == 29 &&((year % 4 == 0 && year % 100 != 0) || year % 400 == 0))
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}

	day_of_year = day;

	for (i = 0; i < month - 1; i++)
	{
		day_of_year += days_in_month[i];
	}

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 366 - day_of_year);
	}
	else
	{
		printf("Day of the year: %d\n", day_of_year);
		printf("Remaining days: %d\n", 365 - day_of_year);
	}
}
