// Program_6.7.c
#include <stdio.h>

int greeting(int x, int y);

int main() {
    int x = 2, y = 3,  z;

    z = greeting(x, y);
    printf("Welcome 2: %d\n", z);
}

int greeting(int x2, int y2) {
    int z2;

    printf("Welcome 1: %d\n", x2);
    z2 = x2 + y2;

    return z2;
}
