// Exercise_7.3.c
#include <stdio.h>
#define SIZE 5

void calculation(int kWh[], double bill[]);
void display(int month[], int kWh[], double bill[]);

const double TARIFF = 0.22;

int main(void){
    int month[SIZE] = {1, 2, 3, 4, 5};
    int kWh[SIZE] = {80, 100, 60, 250, 500};
    double bill[SIZE];

    calculation(kWh, bill);

    display(month, kWh, bill);
}

void calculation(int kWh[], double bill[]){
    for(int i = 0; i < SIZE; i++)
        bill[i] = kWh[i] * TARIFF;
    return;
}

void display(int month[], int kWh[], double bill[]){
    printf("month    kWh    Bill (RM)\n");
    printf("-----------------------\n");
    for(int i = 0; i < SIZE; i++){
        printf(" %3d ", month[i]);
        printf(" %6d ", kWh[i]);
        printf(" %9.2f \n", bill[i]);
    }
    return;
}
