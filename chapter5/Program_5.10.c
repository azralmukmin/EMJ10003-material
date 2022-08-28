// Program_5.10.c
#include <stdio.h>

int main(void) {
    int dayCnt = 0;
    float rainAmt, totalRain = 0;

    printf("Program Analyze Rainfall Data\n\n");
    printf("Enter negative value to stop \ninput process\n\n");

    do {
        dayCnt++;

        printf("Enter rainfall amount day %d: ", dayCnt);
        scanf("%f", &rainAmt);

        if(rainAmt >= 0)
            totalRain += rainAmt;

    } while(rainAmt >= 0);

    printf("\nInput for %d days data\n", dayCnt-1);
    printf("Total amount rainfall is %0.2f\n", totalRain);
    printf("Average amount rainfall is %0.2f\n", totalRain/(dayCnt-1));

    return 0;
}
