// Program_6.9.c
#include <stdio.h>

void greeting(int *x2);

int main() {
    int x = 2;

    greeting(&x);
    printf("Welcome 3: %d\n", x);
}

void greeting(int *x2) {

    printf("Welcome 1: %d\n", x2);
    printf("Welcome 2: %d\n", *x2);

    *x2 = *x2 + 3;

    return;
}
