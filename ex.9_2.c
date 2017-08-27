//Program to calculate number of days between two dates

#include <stdio.h>

//Defines the date structure

struct date
{
	int month;
	int day;
	int year;
};

//Funtction that accepts date structure and return value of N
int elapsed (struct date d)
{
	int n, f, g;
	if (d.month <= 2)
	{
		f = d.year - 1;
		g = d.month + 13;
	}
	else
	{
		f = d.year;
		g = d.month + 1;
	}

	n = 1461 * f / 4 + 153 * g / 5 + d.day;
}

int main (void)
{
	int elapsedDays;
	struct date date1, date2;

	printf("Enter two dates to calculate the elapsed days between them.\n");
	printf("Date 1 (mm dd yyyy): ");
	scanf("%i%i%i", &date1.month, &date1.day, &date1.year);
	printf("Date 2 (mm dd yyyy): ");
	scanf("%i%i%i", &date2.month, &date2.day, &date2.year);

	elapsedDays = elapsed(date2) - elapsed(date1);

	printf("\nThere are %i days between %i/%i/%i and %i/%i/%i.\n", elapsedDays, date1.month, date1.day, date1.year, date2.month, date2.day, date2.year);
}