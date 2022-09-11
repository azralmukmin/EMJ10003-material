// Exercise_7.1.c
#include <stdio.h>
#define SIZE 5
const double TARIFF = 0.22;

int main(void){
    int month[SIZE] = {1, 2, 3, 4, 5};
    int kWh[SIZE] = {80, 100, 60, 250, 500};
    double bill[SIZE];

    for(int i = 0; i < SIZE; i++)
        bill[i] = kWh[i] * TARIFF;

    printf("Month    kWh    Bill (RM)\n");
    printf("-----------------------\n");

    for(int i = 0; i < SIZE; i++){
        printf(" %3d ", month[i]);
        printf(" %6d ", kWh[i]);
        printf(" %9.2f \n", bill[i]);
    }
}
