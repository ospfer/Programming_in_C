// Function to calculate the nth triangular number
//ex4 modifies program 8_4 to return the value of triangularNumber from the function.

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for (i = 1; i <= n; ++i)
		triangularNumber += i;

	return triangularNumber;
	
}

int main (void)
{
	int n, number, triangularNumber, counter;

	printf("What triangular number do you want? ");
	scanf("%i", &number);

	printf("Triangular number %i is %i\n", number, calculateTriangularNumber(number));

	return 0;
}