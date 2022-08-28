// Program_5.13.c
#include <stdio.h>

int main(void)
{
    int n;

    for(n = 10; n > 0; n--)
    {
        if(n < 8)
            break;

        printf("%d ", n);
    }
}
