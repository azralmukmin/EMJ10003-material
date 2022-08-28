// Program_5.16.c
#include <stdio.h>

void displayNumber(void)
{
    for(int n = 10; n > 0; n--)
    {
        if(n < 8)
            return;

        printf("%d ", n);
    }
}

int main(void)
{
    displayNumber();

    return 0;
}

