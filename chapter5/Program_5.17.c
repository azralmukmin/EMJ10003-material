// Program_5.17.c
#include <stdio.h>

int main(void)
{
    int n = 10;

    A:
        printf("%d ", n);
        n--;

        if(n > 0)
            goto A;

    return 0;
}

