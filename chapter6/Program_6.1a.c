// Program_6.1a.c
#include <stdio.h>

int main(void) {
    int amp, ohm, volt, pow;

    printf("Enter current (A) & ");
    printf("\nresistor (Ohm): ");
    scanf("%d %d", &amp, &ohm);

    volt = amp * ohm;
    pow = amp * amp * ohm;

    printf("\nVoltage is %d Volt\n", volt);
    printf("Power is %d Watt\n", pow);
}
