// Program_7.11.c
#include <stdio.h>
#define SIZE 10

int main(void){
    char name[SIZE] = "UniMAP";

    for(int i = 0; i < SIZE; i++)
        printf("%c ", name[i]);

    printf("%s ", name);
}
