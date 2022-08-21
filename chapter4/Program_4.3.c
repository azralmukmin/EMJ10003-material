// Program_4.3.c
#include <stdio.h>
int main(void)
{
    int number, check;

    printf("Enter a number: ");
    scanf("%d", &number);

    check = number % 2;

    if(check == 1)
        printf("%d is an odd number\n", number);
    else
        printf("%d is an even number\n", number);

    return 0;
}
