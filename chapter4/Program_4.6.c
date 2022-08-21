// Program_4.6.c
#include <stdio.h>
int main(void){
    int testScore;
    char grade;

    printf("Enter your test score: ");
    scanf("%d", &testScore);

    if(testScore < 30)
        grade = 'F';
    else if(testScore < 40)
        grade = 'D';
    else if(testScore < 55)
        grade = 'C';
    else if(testScore < 70)
        grade = 'B';
    else
        grade = 'A';

    printf("Your grade is %c\n", grade);

    return 0;
}
