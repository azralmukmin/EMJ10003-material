// Exercise_6.4b.c
#include <stdio.h>

void calcPnV(float current, float resistance, float *power, float *voltage);

int main(void) {
    float current, resistance, power, voltage;

    printf("Insert Current (A) : ");
    scanf("%f", &current);
    printf("Insert Resistance (Ohm) : ");
    scanf("%f", &resistance);

    calcPnV(current, resistance, &power, &voltage);

    printf("\nThe power is %0.2f W\n\n", power);
    printf("The voltage is %0.2f V\n", voltage);

    return 0;
}

void calcPnV(float current, float resistance, float *power, float *voltage){

    *power = current * current * resistance;
    *voltage = current * resistance;

    return;
}
