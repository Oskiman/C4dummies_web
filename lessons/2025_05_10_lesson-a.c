// The following code outputs the real and imaginary parts of complex constant I:

#include <stdio.h>
#include <math.h>
#include <complex.h>

int main()
{
    printf("I = %f + %.0fi\n",creal(I),cimag(I));

    return 0;
}
