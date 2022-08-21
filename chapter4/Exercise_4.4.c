// Exercise_4.3.c

#include <stdio.h>

#define RATE1 0.2
#define RATE2 0.3
#define RATE3 0.5

int main(void)
{
    float power, bill;
    int menu, first, second, total;

    printf(" ********** MENU **********\n");
    printf("    [1] Tariff info\n");
    printf("    [2] Calculator\n");
    printf("    [3] Exit\n");
    printf(" **************************\n\n");

    printf(" Choose the operation to do: ");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf("\n First  200 kWh (  0 - 200 kWh) : RM 0.20\n");
            printf(" Second 100 kWh (201 - 300 kWh) : RM 0.30\n");
            printf(" Onward     kWh (   >= 301 kWh) : RM 0.50\n");
            break;
        case 2:
            printf("\n Enter power consumed (kWh): ");
            scanf("%f", &power);
            if(power <= 200)
                bill = power * RATE1;
            else if(power <= 300)
                bill = 200*RATE1 + (power - 200)*RATE2;
            else
                bill = 200*RATE1 + 100*RATE2 + (power - 300)*RATE3;
            printf("\n Total amount bill: RM %0.2f\n", bill);
            break;
        case 3:
            printf("\n Thank you\n");
            break;
        default:
            printf("\n Option not available\n");
    }

    return 0;
}
