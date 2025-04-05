// code copied from C-4 dummies 
// switch does not work on the declared const ints so I used hard coded numbers
#include <stdio.h>

int main()
{
	// phone numbers for this example have 10 digits
	const int digits = 10;
	const int open_paren = 0;
	const int close_paren = 3;
	const int dash = 6;
	long phone;
	char number[digits + 1];
	int x;

	// assign phone number as long value
	phone = 5551234001;

	// convert to a string
	snprintf(number, digits + 1, "%ld", phone);

	// process the phone number
	for(x = 0; x < digits; x++)
	{
		switch(x)
		{
			case 0:
				printf("(%c", number[x]);
				break;
			case 3:
				printf(") %c", number[x]);
				break;
			case 6:
				printf("-%c", number[x]);
				break;
			default:
				printf("%c", number[x]);
		}

	}

	putchar('\n');

	return 0;
}
