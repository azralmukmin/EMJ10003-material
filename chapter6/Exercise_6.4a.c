// Exercise_6.4a.c
#include <stdio.h>

void calcPower(float current, float resistance, float *power);
void calcVoltage(float current, float resistance, float *voltage);

int main(void) {
    float current, resistance, power, voltage;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    calcPower(current, resistance, &power);
    calcVoltage(current, resistance, &voltage);

    printf("\nThe power is %0.2f W\n\n", power);
    printf("The voltage is %0.2f V\n", voltage);

    return 0;
}

void calcPower(float current, float resistance, float *power){

    *power = current * current * resistance;

    return;
}

void calcVoltage(float current, float resistance, float *voltage){

    *voltage = current * resistance;

    return;
}
