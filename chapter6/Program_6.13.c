// Program_6.13.c
#include <stdio.h>

int funKMtoM(int x2);

const double multiply = 1000;

int main() {
    int x = 5, y = 2, z1, z2;

    z1 = funKMtoM(x);
    z2 = funKMtoM(y);

    printf("%d km is %d m\n", x, z1);
    printf("%d km is %d m\n", y, z2);
}

int funKMtoM(int x2) {
    int A = x2 * multiply;
    return A;
}
