// Exercise_3.4.c

#include <stdio.h>

int main(void)
{
    float a, b, c, d;

    printf("Enter four flouting-point : ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    printf("\nThe input displayed as decimal floating-point :\n");
    printf("|%9.4f|\n", a);
    printf("|%9.5f|\n", b);
    printf("|%7.3f|\n", c);
    printf("|%5.2f|\n", d);

    return 0;
}

