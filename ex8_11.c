/* Program that accepts a variable length array and returns the sum of its elements.*/

#include <stdio.h>

int arraySum (int array[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += array[i];
	}

	return sum;
}

int main (void)
{
	int arraySum (int array[], int n);
	int sizeOfArray;
	
	printf("Sum the values of an arry.\n");
	printf("How big of an array do you want? ");
	scanf("%i", &sizeOfArray);

	int values[sizeOfArray];
	
	for (int i = 0; i < sizeOfArray; ++i)
	{
		printf("Element %i: ", i + 1);
		scanf("%i", &values[i]);
	}

	printf("This array contains %i elements and the sum of its elements is %i\n", sizeOfArray, arraySum(values, sizeOfArray));
}