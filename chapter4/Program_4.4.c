// Program_4.4.c
#include <stdio.h>
int main(void)
{
    const double PAY_RATE = 50.0;
    double hours, charges;

    printf("Hours of worked : ");
    scanf("%lf", &hours);

    hours = (hours < 5) ? 5 : hours;

    charges = PAY_RATE * hours;

    printf("The charges are RM%.2lf\n", charges);

    return 0;
}
