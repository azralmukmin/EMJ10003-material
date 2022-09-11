// Program_7.10.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int x[SIZE] = {5, 10, 15, 20, 25};

    printf("%d ", x[0]);	 // first technique
    printf("%d ", x[1]);
    printf("%d ", x[2]);
    printf("%d ", x[3]);
    printf("%d\n", x[4]);

    for(int i = 0; i < SIZE; i++) // second technique
        printf("%d ", x[i]);
}
