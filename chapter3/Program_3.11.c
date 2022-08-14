// Program_3.11.c
// Reading floating-point from keyboard
#include <stdio.h>

int main(void)
{
    float a;
    double b;

    printf("Enter input float: ");
    scanf("%f", &a);

    printf("Enter input double: ");
    scanf("%lf", &b);

    printf("\nThe input displayed as floating-point:\n");
    printf("%5.2f %5.2f\n", a, b);

    return 0;
}
