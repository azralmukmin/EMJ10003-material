// Program_7.4.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int x[SIZE];

    printf("Enter %d number \n", SIZE);

    for(int i = 0; i < SIZE; i++)
        scanf("%d", &x[i]);

}

