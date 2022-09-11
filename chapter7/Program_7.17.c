// Program_7.17.c
#include <stdio.h>
#define ROW 2
#define COL 5

void display(int x[][COL]);

int main(void){
    int x[ROW][COL] = {{1, 2, 3, 4, 5},
                        {6, 7, 8, 9, 10}};

    display(x);
}

void display(int x[][COL]){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COL; j++)
            printf("%d ", x[i][j]);
    }

    return;
}
