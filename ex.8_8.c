#include <stdio.h>

float absoluteValue (float x)
{
	if (x < 0)
		x = -x;
	return x;
}

// Function to compute the square root of a number using the Newton-Raphson Iteration Technique

float squareRoot (float x)
{
	const float epsilon = .00001;
	float guess = 1.0;

	while (absoluteValue (guess * guess - x) >= epsilon)
		guess = (x / guess + guess) / 2.0;

	return guess;
}

float quadratic (int a, int b, int c)
{
	float xone, xtwo;

	if (((b * b) - (4 * a * c)) < 0)
	{
		printf("The roots are imaginary and a value X does not exist to solve the quadratic equation.\n");
	}

	xone = 
	
}

int main (void)
{
	printf("%f\n", quadratic(4, -17, -15));
}