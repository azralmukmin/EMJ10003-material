// Program_5.5.c
#include <stdio.h>

int main(void)
{
    int number;

    printf("Enter a number less than 10: ");
    scanf("%d", &number);

    while(number >= 10)
    {
        printf("Invalid Entry!\n");
        printf("Enter a number less than 10: ");
        scanf("%d", &number);
    }

    printf("Done");

    return 0;
}
