// Program_7.13.c
#include <stdio.h>
#define SIZE 5

void square(int x);

int main(void){
    int data[SIZE] = {1, 2, 3, 4, 5};

    for(int i = 0; i < SIZE; i++)
        square(data[i]);
}

void square(int x) {
    printf("%d ", x*x);

    return;
}
