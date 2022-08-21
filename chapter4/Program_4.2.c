// Program_4.2.c
#include <stdio.h>
int main(void)
{
    int value = 5;

    if(value > 0)
        printf("First is %d\n", value);

    value = value * 2;

    if(value >= 15){
        value = 20;
        printf("Second is %d\n", value);
    }

    return 0;
}
