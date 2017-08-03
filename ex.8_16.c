/*Program to convert a positive integer to another base. Adds on to program 8_14 and 
repeatedly requests a base until a valid response is provided.*/

#include <stdio.h>

int convertedNumber[64];
long int numberToConvert;
int base;
int digit = 0;

void getNumberAndBase (void)
{
	printf("Number to be converted (Enter 0 to terminate)? ");
	scanf("%li", &numberToConvert);
	
	/*If numberToConvert is 0, main function will break and terminate program. If numberToConvert is
	not 0, continue with function and ask the user for a base*/
	if (numberToConvert != 0)
	{
		do
		{
			printf("Base between 2 and 16? ");
			scanf("%i", &base);/* code */
		} while (base < 2 || base > 16);
	}
}

void convertNumber (void)
{
	do
	{
		convertedNumber[digit] = numberToConvert % base;
		++digit;
		numberToConvert /= base;
	} while (numberToConvert != 0);
}

void displayConvertedNumber(void)
{
	const char baseDigits[16] = 
	{ '0', '1', '2', '3', '4', '5', '6', '7',
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F'	};
	int nextDigit;

	printf("Converted Number = ");

	for (--digit; digit >= 0; --digit) {
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}

int main (void)
{
	void getNumberAndBase (void), convertNumber (void),
	displayConvertedNumber (void);

	//1 is boolean true, so this will loop forever until break condition inside loop is met.
	while (1)
	{
		getNumberAndBase();
		if (numberToConvert == 0)
		{
			break;
		}
		convertNumber();
		displayConvertedNumber();	
	}
	return 0;
}