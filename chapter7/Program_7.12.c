// Program_7.12.c
#include <stdio.h>
#define SIZE 10

int main(void){
    char sample[SIZE];

    printf("Enter %d data : \n", SIZE);

    for(int i = 0; i < SIZE; i++)
        scanf("%d", &sample[i]);

    printf("\nDisplay %d enter data : \n", SIZE);

    for(int i = 0; i < SIZE; i++)
        printf("%d ", sample[i]);
}
