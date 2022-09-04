// Program_6.11.c
#include <stdio.h>

void funAdd(void);

int main() {

    for(int i = 0; i < 10; i++)
        funAdd();
}

void funAdd(void) {
    static int x = 0;

    x++;
    printf("%d ", x);

    return;
}
