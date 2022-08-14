// Program_3.9.c
// Printing with width and precision
#include <stdio.h>

int main(void)
{
    printf("1  |%d|\n", 852);
    printf("2  |%-2d|\n", 8);
    printf("3  |%8d|\n", 852);
    printf("4  |%-8d|\n", 852);
    printf("5  |%0.2f|\n", 852.31);
    printf("6  |%4.5f|\n", 852.31);
    printf("7  |%3.1f|\n", 852.31);
    printf("8  |%10.3f|\n", 852.31);
    printf("9  |%10.3e|\n\n", 852.31);

    return 0;
}

