// Exercise_7.4.c
#include <stdio.h>
#define USER 3  // ROW
#define MONTH 4 // COLUMN

void calculation(int kWh[][MONTH], double bill[][MONTH], double totalBill[]);
void display(int user[], double bill[][MONTH], double totalBill[]);

const double TARIFF = 0.22;

int main(void){
    int user[MONTH] = {1, 2, 3};
    int kWh[USER][MONTH] = {{100, 50, 80, 70},
                            {90, 120, 4, 140},
                            {90, 150, 100, 60}};
    double bill[USER][MONTH];
    double totalBill[USER] = {0};

    calculation(kWh, bill, totalBill);
    display(user, bill, totalBill);

    return 0;
}

void calculation(int kWh[][MONTH], double bill[][MONTH],double totalBill[]){
    for(int i = 0; i < USER; i++){
        for(int j = 0; j < MONTH; j++){
            bill[i][j] = kWh[i][j] * TARIFF;
            totalBill[i] += bill[i][j];
        }
    }

    return;
}

void display(int user[], double bill[][MONTH], double totalBill[]){
    printf(" User  --------- Bill (RM) ---------    Total (RM)\n");
    printf("         1       2       3       4      \n");
    printf("---------------------------------------------------\n");
    for(int i = 0; i < USER; i++){
        printf(" %3d ", user[i]);
        for(int j = 0; j < MONTH; j++){
            printf(" %6.2f ", bill[i][j]);
        }
        printf(" %9.2f \n", totalBill[i]);
    }
    return;
}
