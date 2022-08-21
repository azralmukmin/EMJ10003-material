// Program_4.12.c
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

    if(menu == 1 || menu == 2) {
        printf(" Enter two number: ");
        scanf("%d %d", &first, &second);

        if(menu == 1) {
            total = first + second;
            printf("\n %d + %d = %d\n", first, second, total);
        } else {
            total = first * second;
            printf("\n %d x %d = %d\n", first, second, total);
        }
    } else {
        printf("\n Thank you\n");
    }
    return 0;
}
