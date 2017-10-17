//TESTING TWO CHARACTER STRINGS FOR EQUALITY
//Functino to determine if two strings are equal

#include <stdio.h>
#include <stdbool.h>

bool equalStrings (const char s1[], const char s2[])
{
	int i = 0;
	bool areEqual;

	//Loops through function arguments s1 and s2 by character. The while loop exits when the i'th character of s1 and s2 are not equal or when it detects a null character. 
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		++i;
	}

	//After detecting a null character from the while loop, this if statement tests to see if the null character is in the same place in s1 and s2. If so, the strings are equal
	if (s1[i] == '\0' && s2[i] == '\0')
	{
		areEqual = true;
	}
	else
	{
		areEqual = false;
	}

	return areEqual;
}

int main(void)
{
	bool equalStrings (const char s1[], const char s2[]);
	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf("%i\n", equalStrings(stra, strb));
	printf("%i\n", equalStrings(stra, stra));
	printf("%i\n", equalStrings(strb, "string"));

	return 0;
}