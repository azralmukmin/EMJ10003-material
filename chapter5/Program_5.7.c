// Program_5.7.c
#include <stdio.h>

int main(void) {
    int menu, first, second, total;
    char repeat;

    do
    {
        printf("\n*******MENU*******\n");
        printf(" [1] Addition\n");
        printf(" [2] Substraction\n");
        printf("******************\n");

        printf("Choose the operation: ");
        scanf("%d", &menu);

        printf("Enter two numbers: ");
        scanf("%d %d", &first, &second);

        if(menu == 1)
            total = first + second;
        else if(menu == 2)
            total = first - second;
        else
            printf("Not valid operation");

        printf("The result is : %d ", total);
        printf("\n\nPress Y or y to repeat: ");
        scanf(" %c", &repeat);
    } while((repeat == 'y') || (repeat == 'Y'));

    printf("\nEND\n");

    return 0;
}
