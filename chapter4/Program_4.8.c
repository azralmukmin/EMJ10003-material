// Program_4.8.c
#include <stdio.h>
int main(void){
    int a, b, c;

    printf("Please insert three integer number: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > b)
    {
        if(a > c)
            printf("%d is greater\n", a);
        else
            printf("%d is greater\n", c);
    }
    else
    {
        if(b > c)
            printf("%d is greater\n", b);
        else
            printf("%d is greater\n", c);
    }

    return 0;
}
