// Program_7.6.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int x[SIZE] = {0};

    x[0] = 2;
    x[1] = x[0] + 3;
    x[2] = x[0] + x[1];
    x[3] = x[2] * 3;
    x[4] = x[3] - x[2];
}
