// Program_6.10.c
#include <stdio.h>

int main() {
    int a = 2;
    int *ptr = &a;

    printf("1. %d\n", ptr);
    printf("2. %d\n", &a);
    printf("3. %d\n", &ptr);
    printf("4. %d\n", *ptr);

    *ptr = *ptr + 5;

    printf("5. %d\n", *ptr);
    printf("6. %d\n", a);

    return 0;
}
