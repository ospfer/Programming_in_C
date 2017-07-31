/*
Program that checks whether an integer is a prime number.
*/

#include <stdio.h>

int prime (int n)
{
	for (int i = 2; i < n; ++i)
		if (n % i == 0)
		{
			printf("%i is not a prime number\n", n);
			return 1;
		}
		printf("%i is a prime number\n", n);
		return 0;
}

int main (void)
{
	prime(7);
}