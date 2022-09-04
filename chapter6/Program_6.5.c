// Program_6.5.c
#include <stdio.h>

void greeting(int xSub);

int main() {
    int x = 5;

    greeting(x);
    greeting(10);
}

void greeting(int xSub){

    printf("Welcome %d\n", xSub);
    return;
}
