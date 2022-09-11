// Program_7.8.c
#include <stdio.h>

int main(void){
    int x[ ] = {0, 1, 2, 3, 4};
    int y[ ] = {10, 11, 12, 13, 14};

    x = y;         // error : not allowed

    for(int i = 0; i < SIZE; i++) // copy each element
        x[i] = y[i];
}
