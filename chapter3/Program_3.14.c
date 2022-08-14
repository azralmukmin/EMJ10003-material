// Program_3.14.c
#include <stdio.h>
int main(void)
{
    int x = 3, y = 2, out1, out2;
    double d = 2.0, out3, out4;

    out1 = x / y;
    out2 = x / d;
    out3 = x / y;
    out4 = x / d;

    printf("output in integer: %d %d\n", out1, out2);
    printf("output in double: %f %f\n", out3, out4);

    return 0;
}
