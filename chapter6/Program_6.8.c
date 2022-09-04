// Program_6.8.c
#include <stdio.h>

int funAdd(int x2, int y2);

int main() {
    int x = 5, y = 2, z;

    z = funAdd(x, y);

    printf("is %d\n", z);
}

int funAdd(int x2, int y2) {
    int z2;

    printf("%d add %d ", x2, y2);
    z2 = x2 + y2;
    return z2;
}
