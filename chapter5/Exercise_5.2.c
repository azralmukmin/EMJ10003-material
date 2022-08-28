// Exercise_5.2.c
#include <stdio.h>
#define RATE 0.22

int main(void)
{
    float power, bill, total_bill = 0;
    int i = 1;

    while(i <= 5) {

        printf("Enter consumption %d (kWh) : ",i);
        scanf("%f", &power);

        bill = power * RATE;

        printf("-- Total amount bill %d: %0.2f\n", i, bill);

        if(bill <= 20)
            printf("Your bill is free\n\n");
        else
            printf("Please pay your bill\n\n");

        i++;
    }

    return 0;
}
