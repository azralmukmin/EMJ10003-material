// Program_3.5.c
// Using the integer conversion specifiers
#include <stdio.h>

int main(void)
{
    int input = 500;
    printf("1  %d\n", input);
    printf("3  %d\n", +input);
    printf("4  %d\n", -input);
    printf("5  %o\n", input);
    printf("6  %u\n", input);
    printf("2  %i\n", input);
    printf("7  %x\n", input);
    printf("8  %X\n", input);

    return 0;
}


