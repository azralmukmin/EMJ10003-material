// Program_7.7.c
#include <stdio.h>

int main(void){
    int a, b, c;
    int x[ ] = {0, 1, 2, 3, 4};

    a = x[1];         // a = 1

    b = x[2] + x[3];  // b = 5

    x[3] = x[4];

    c = x[b - 2];     // c = 4
}
