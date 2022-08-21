// Program_4.11.c
#include <stdio.h>
int main(void){
    char grade;

    printf("Please insert grade: ");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent\n");
        case 'B':
            printf("Good\n");
            break;
        case 'C':
            printf("Adequate\n");
            break;
        default:
            printf("Fail\n");
            break;
    }
    return 0;
}
