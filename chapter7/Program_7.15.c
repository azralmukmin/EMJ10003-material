// Program_7.15.c
#include <stdio.h>
#define SIZE 5

void square(int x[]);

int main(void){
    int data[SIZE] = {1, 2, 3, 4, 5};

    square(data);   // or, square(&data[0]);
}

void square(int x[]){
    for(int i = 0; i < SIZE; i++)
        printf("%d ", x[i] * x[i]);
    return;
}
