// Program_7.16.c
#include <stdio.h>
#define ROW 2
#define COL 5

int main(void){
    int x[ROW][COL] = {{1, 2, 3, 4, 5},
                       {5, 10, 15, 20, 25}};
             // or, = {1, 2, 3, 4, 5, 5, 10, 15, 20, 25};

    // To access and assign
    x[0][0] = 100;
    x[0][1] = x[1][4];
}
