// Program_5.14.c
#include <stdio.h>

int main(void)
{
    int testVal = 0;

    while(testVal < 10)
    {
        testVal++;

        if((testVal%2) == 1)
            continue;

        printf("%d ", testVal);
    }

}
