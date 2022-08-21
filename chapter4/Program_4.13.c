// Program_4.13.c
#include <stdio.h>
int main(void){
    int menu, first, second, total;

    printf(" ********** MENU **********\n");
    printf("    [1] Addition\n");
    printf("    [2] Multiplication\n");
    printf("    [3] Exit\n");
    printf(" **************************\n\n");

    printf(" Choose the operation to do: ");
    scanf("%d", &menu);

    switch(menu) {
        case 1:
            printf(" Enter two number: ");
            scanf("%d %d", &first, &second);
            total = first + second;
            printf("\n %d + %d = %d\n", first, second, total);
            break;
        case 2:
            printf(" Enter two number: ");
            scanf("%d %d", &first, &second);
            total = first * second;
            printf("\n %d * %d = %d\n", first, second, total);
            break;
        case 3:
            printf("\n Thank you\n");
            break;
        default:
            printf("\n Option not available\n");
    }
    return 0;
}

