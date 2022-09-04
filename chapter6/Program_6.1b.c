// Program_6.1b.c
#include <stdio.h>

int calcV(int amp, int ohm) {
    return amp * ohm;
}

int calcP(int amp, int ohm) {
    return amp * amp * ohm;
}

int main(void) {
    int amp, ohm, volt, pow;

    printf("Enter current (A) & ");
    printf("\nresistor (Ohm): ");
    scanf("%d %d", &amp, &ohm);

    volt = calcV(amp, ohm);
    pow = calcP(amp, ohm);

    printf("\nVoltage is %d Volt\n", volt);
    printf("Power is %d Watt\n", pow);
}
