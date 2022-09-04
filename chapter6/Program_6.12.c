// Program_6.12.c
#include <stdio.h>

int funAdd(int x2, int y2);
int funSub(int x2, int y2);

int A, B;

int main() {
    int x = 5, y = 2;
    funAdd(x, y);
    funSub(x, y);
    printf("add: %d sub: %d", A, B);
}

int funAdd(int x2, int y2) {
    A = x2 + y2;
    return;
}

int funSub(int x2, int y2) {
    B = x2 - y2;
    return;
}
