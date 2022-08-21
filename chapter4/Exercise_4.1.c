// Exercise_4.1.c
#include <stdio.h>
#define RATE 0.22

int main(void)
{
    float kWh, bill;

    printf("Enter power consumed: ");
    scanf("%f", &kWh);

    bill = kWh * RATE;

    printf("\nTotal amount bill: %0.2f\n", bill);

    if(bill <= 20)
        printf("Your bill is free\n");

    return 0;
}
