// Exercise_6.3.c
#include <stdio.h>

float calcPower(float current, float resistance);
float calcVoltage(float current, float resistance);

int main(void) {
    float current, resistance, power, voltage;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    power = calcPower(current, resistance);
    voltage = calcVoltage(current, resistance);

    printf("\nThe power is %0.2f W\n\n", power);
    printf("The voltage is %0.2f V\n", voltage);

    return 0;
}

float calcPower(float current, float resistance){
    float power;

    power = current * current * resistance;

    return power;
}

float calcVoltage(float current, float resistance){
    float voltage;

    voltage = current * resistance;

    return voltage;
}
