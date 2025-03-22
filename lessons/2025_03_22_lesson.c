// Code from: https://c-for-dummies.com/blog/?p=6878
// prefix & postfix
// 2 loops, each outputs values of x, initialised to 0
// The first uses prefix, the second uses postfix

#include <stdio.h>

int main()
{
	const int count = 10;
	int x;

	// prefixed
	x = 0;
	puts("Prefixed: ++x");
	while(++x < count)
		printf("%d\n", x);

	// postfixed
	puts("Postfixed: x++");
	x = 0;
	while(x++ < count)
		printf("%d\n", x);

	return 0;
}
