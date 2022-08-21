// Program_4.10.c
#include <stdio.h>
int main(void){
    char grade;

    printf("Please insert grade: ");
    scanf("%c", &grade);

    if(grade == 'A')
        printf("Excellent\n");
    else if(grade == 'B')
        printf("Good\n");
    else if(grade == 'C')
        printf("Adequate\n");
    else
        printf("Fail\n");

    return 0;
}





