// Program_6.6.c
#include <stdio.h>

int greeting(int x);

int main() {
    int x = 5, z;

    z = greeting(x);
    printf("Welcome 2: %d\n", z);
}

int greeting(int x2) {

    printf("Welcome 1: %d\n", x2);
    x2++;

    return x2;
}
