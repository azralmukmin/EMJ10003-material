// Program_5.12.c
#include <stdio.h>

int main(void)
{
    int firstNum, secondNum;

    for(firstNum = 1; firstNum <= 5; firstNum++)
    {
        for(secondNum = 1; secondNum <= 5; secondNum++)
            printf(" %d\t", firstNum*secondNum);

        printf("\n");
    }
    return 0;
}

