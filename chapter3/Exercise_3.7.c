// Exercise_3.7.c
#include <stdio.h>
#define YEN 25.69218

int main(void)
{
    double inputRM, totalYEN;

    printf("Enter RM to convert : ");
    scanf("%lf", &inputRM);

    totalYEN = inputRM * YEN;

    printf("\nRinggit Malaysia\t: RM %7.2lf \n", inputRM);
    printf("Japanese Yen\t\t:  \x9D %7.2lf \n", totalYEN);

    return 0;
}
