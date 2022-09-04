// Program_6.2.c
#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void) {
    double area, radius;

    printf("Enter radius of circle : ");
    scanf("%lf", &radius);

    area = 3.14159 * pow(radius,2.0);

    printf("\nThe area is %0.4lf", area);
    getch();
}
