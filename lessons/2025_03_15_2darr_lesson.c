// C for dummies
// lesson 2025_03_15
// the problem with strings in 2d arrays
// array a[][] contains 8 strings, each 8 characters long
// this leaves 14 bytes of unused memory
// use an array of pointers to store strings instead
#include <stdio.h>

int main(void)
{
	char a[8][8] = { "alpha", "bravo", "charlie", "delta", 
		"echo", "foxtrot", "golf", "hotel" };

	int x;

	for(x = 0; x < 8; x++)
		puts(a[x]);

	return 0;
}
