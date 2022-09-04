// Exercise_6.2.c
#include <stdio.h>

void calcPower(float current, float resistance);
void calcVoltage(float current, float resistance);

int main(void) {
    float current, resistance;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    calcPower(current, resistance);
    calcVoltage(current, resistance);

    return 0;
}

void calcPower(float current, float resistance){
    float power;

    power = current * current * resistance;

    printf("\nThe power is %0.2f W\n\n", power);

    return;
}

void calcVoltage(float current, float resistance){
    float voltage;

    voltage = current * resistance;

    printf("The voltage is %0.2f V\n", voltage);

    return;
}
