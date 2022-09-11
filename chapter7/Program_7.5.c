// Program_7.5.c
#include <stdio.h>
#define SIZE 5

int main(void){
    int x[SIZE];
    float y[SIZE];

    printf("Enter %d matric and marks : \n", SIZE);

    for(int i = 0; i < SIZE; i++)
        scanf("%d %f", &x[i], &y[i]);

}
