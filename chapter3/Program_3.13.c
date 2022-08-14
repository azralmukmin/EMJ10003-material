// Program_3.13.c
// Prefix and postfix expression
#include <stdio.h>
int main(void)
{
    int a = 4, b = 4;
    int x = 8, y = 8;

    printf("Prefix expression\n");
    printf("before: a = %d, b = %d\n", a, b);
    b = ++a;
    printf("after : a = %d, b = %d\n\n", a, b);

    printf("Postfix expression\n");
    printf("before: x = %d, y = %d\n", x, y);
    x = y++;
    printf("after : x = %d, y = %d\n\n", x, y);

    return 0;
}
