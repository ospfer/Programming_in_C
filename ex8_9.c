/*A program that returns the least common multiple of two integers.*/

#include <stdio.h>

int gcd (int u, int v)
{
	int temp;

	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int lcm (int u, int v)
{
	return ((u * v) / gcd (u,v));
}

int main (void)
{
	int lcm1, lcm2;
	printf("Find the least common multiple of two numbers. \nFirst number: ");
	scanf("%i", &lcm1);
	printf("Second number: ");
	scanf("%i", &lcm2);
	printf("The least common multiple of %i and %i is %i", lcm1, lcm2, lcm (lcm1, lcm2));
}