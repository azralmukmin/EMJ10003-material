// Program_6.3.c
#include <stdio.h>

int square(int input);

int main() {
    int output;

    output = square(5);
    printf("%d\n", output);
    output = square(10);
    printf("%d\n", output);
}

int square(int input) {
    int output;

    output = input * input;
    return output;
}
