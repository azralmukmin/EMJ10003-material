// Program_5.9.c
#include <stdio.h>

int main(void) {
    int i = 1, num, n;
    int sumOdd = 0, sumEven = 0, numOdd = 0, numEven = 0;

    printf("Enter number of data: ");
    scanf("%d", &n);

    while(i <= n) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if((num%2) == 0){
            sumEven += num;
            numEven++;
        } else {
            sumOdd += num;
            numOdd++;
        }
        i++;
    }
    printf("\nSum even is %d\n", sumEven);
    printf("Sum odd is %d\n", sumOdd);
    printf("No of even is %d\n", numEven);
    printf("No of odd is %d\n", numOdd);

    return 0;
}
