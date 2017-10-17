//VARIABLE-LENGTH CHARACTER STRINGS
//Function to count the number of characters in a string

#include <stdio.h>

int stringLength (const char string[])
{
	int count = 0;

	while(string[count] != '\0')
	{
		++count;
	}

	return count;
}

int main(void)
{
	int stringLength (const char stringp[]);
	const char word1[] = {'a', 's', 't', 'e', 'r', '\0'};
	const char word2[] = {'a', 't', '\0'};
	const char word3[] = {'a', 'w', 'e', '\0'};

	printf("%i\t%i\t%i\n", stringLength(word1), stringLength(word2), stringLength(word3));

	return 0;
}