// Exercise_4.3.c

#include <stdio.h>

#define RATE1 0.2
#define RATE2 0.3
#define RATE3 0.5

int main(void)
{
    float kWh, bill;

    printf("Enter power consumed: ");
    scanf("%f", &kWh);

    if(kWh <= 200)
        bill = kWh * RATE1;
    else if(kWh <= 300)
        bill = 200*RATE1 + (kWh - 200)*RATE2;
    else
        bill = 200*RATE1 + 100*RATE2 + (kWh - 300)*RATE3;

    printf("\nTotal amount bill: %0.2f\n", bill);

    if(bill <= 20)
        printf("Your bill is free\n");
    else
        printf("Please pay your bill\n");

    return 0;
}
