// Program_7.9.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int x[ ] = {5, 10, 15, 20, 25};
    int sum = 0, i = 0;

    x[i]++;
    for(int i = 0; i < SIZE; i++)
        printf("%d ", x[i]);
    printf("\n");

    sum = x[4];
    printf("%d\n", sum);

    --x[1];
    for(int i = 0; i < SIZE; i++)
        printf("%d ", x[i]);
    printf("\n");

    sum = x[i++] + 3;
    printf("%d\n", sum);

    x[++i] -= x[4];
    for(int i = 0; i < SIZE; i++)
        printf("%d ", x[i]);
    printf("\n");
}

