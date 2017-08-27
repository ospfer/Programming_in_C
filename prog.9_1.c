//Program to illustrate a structure

#include <stdio.h>

int main (void)
{
	struct date  //Defines the date structure
	{
		int month;
		int day;
		int year;
	};

	struct date today;  //Today variable defined with date structure

	//Initializes variables month, day, and year in today structure

	today.month = 9;
	today.day = 25;
	today.year = 2004;

	printf("Today's date is %i/%i/%.2i.\n", today.month, today.day, today.year % 100);

	return 0;
}

