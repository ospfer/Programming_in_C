// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue (float x)
{
	if (x < 0)
		x = -x;
	return x;
}

// Function to compute the square root of a number using the Newton-Raphson Iteration Technique.
// Exercise 3 adds epsilon as an argument to the sqaureRoot function
// Exercise 4 prints the value of guess through each iteration of the while loop

float squareRoot (float x, const float epsilon)
{
	float guess = 1.0;

	while (absoluteValue (guess * guess - x) >= epsilon)
	{	guess = (x / guess + guess) / 2.0;
		printf("%f\n", guess);
	}
	
	return guess;
}

int main (void)
{
	printf("squareRoot (2.0) with an epsilon of .00001 = %f\n", squareRoot (2.0, .00001));
	printf("squareRoot (144.0) with an epsilon of .00001 = %f\n", squareRoot (144.0, .00001));
	printf("squareRoot (17.5) with an epsilon of .00001 = %f\n", squareRoot (17.5, .00001));

	return 0;
}