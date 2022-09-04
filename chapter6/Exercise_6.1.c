// Exercise_6.1.c
#include <stdio.h>

void calcPower(void);
void calcVoltage(void);

int main(void) {

    calcPower();
    calcVoltage();

    return 0;
}

void calcPower(void){
    float power, current, resistance;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    power = current * current * resistance;

    printf("\nThe power is %0.2f W\n\n", power);

    return;
}

void calcVoltage(void){
    float voltage, current, resistance;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    voltage = current * resistance;

    printf("\nThe voltage is %0.2f V\n", voltage);

    return;
}
