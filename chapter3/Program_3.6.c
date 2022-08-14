// Program_3.6.c
/* Printing floating point number
with it conversion specifiers */
#include <stdio.h>

int main(void)
{
    double input = 1234567.89;

    printf("1  %e\n", input);
    printf("2  %e\n", + input);
    printf("3  %e\n", - input);
    printf("4  %E\n", input);
    printf("5  %f\n", input);
    printf("6  %g\n", input);
    printf("7  %G\n", input);

    return 0;
}



