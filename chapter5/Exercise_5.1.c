// Exercise_5.1.c
#include <stdio.h>
#define RATE 0.22

int main(void)
{
    float power, bill, total_bill = 0;

    for(int i = 1; i <= 5; i++) {

        printf("Enter consumption %d (kWh) : ",i);
        scanf("%f", &power);

        bill = power * RATE;

        printf("-- Total amount bill %d: %0.2f\n", i, bill);

        if(bill <= 20)
            printf("Your bill is free\n\n");
        else
            printf("Please pay your bill\n\n");
    }

    return 0;
}
