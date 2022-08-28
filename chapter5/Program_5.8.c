// Program_5.8.c
#include <stdio.h>

int main(void) {
    int n, index;
    float sum = 0.0, number;

    printf("Enter number of data: ");
    scanf("%d", &n);

    for(index = 1; index <= n; index++)
    {
        printf("Enter number %d: ", index);
        scanf("%f", &number);
        sum += number;
    }

    printf("\nThe sum is %0.2f\n", sum);
    printf("The average is %0.2f", sum/n);

    return 0;
}
