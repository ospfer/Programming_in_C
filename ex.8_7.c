#include <stdio.h>
#include <math.h>

long int x_to_the_n (int x, int n)
{
	return (long int)pow(x, n);
}

int main (void)
{
	int base, power;
	printf("This function raises a base to a power\n");
	printf("Enter a base: ");
	scanf("%i", &base);
	printf("Enter a power: ");
	scanf("%i", &power);
	printf("%i to the power of %i is %li\n", base, power, x_to_the_n(base, power));
}