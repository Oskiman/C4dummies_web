// warning: implicit declaration of function ‘puts’ [-Wimplicit-function-declaration]
// puts("How do I work?");
// note: include '<stdio.h>' or provide a declaration of 'puts'
// In the case of puts(), the compiler sees that the function contains a string, therefore it assumes its definition includes a string as its argument. The return value is an int, which is happenstance.


int main()
{
	puts("How do I work?");
	//puts(2);	// causes a segfault
	puts("How do I work?", 4.5);	// second arg is ignored
	return 0;
}
