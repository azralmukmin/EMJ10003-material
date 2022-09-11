// Exercise_7.2.c
#include <stdio.h>
#define SIZE 5

void calculation(int kWh, double *bill);
void display(int month, int kWh, double bill);

const double TARIFF = 0.22;

int main(void){
    int month[SIZE] = {1, 2, 3, 4, 5};
    int kWh[SIZE] = {80, 100, 60, 250, 500};
    double bill[SIZE];

    for(int i = 0; i < SIZE; i++)
        calculation(kWh[i], &bill[i]);

    printf("month    kWh    Bill (RM)\n");
    printf("-----------------------\n");

    for(int i = 0; i < SIZE; i++){
        display(month[i], kWh[i], bill[i]);
    }
}

void calculation(int kWh, double *bill){
    *bill = kWh * TARIFF;
    return;
}

void display(int month, int kWh, double bill){
    printf(" %3d ", month);
    printf(" %6d ", kWh);
    printf(" %9.2f \n", bill);
    return;
}
