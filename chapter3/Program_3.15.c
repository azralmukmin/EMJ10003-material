// Program_3.15.c
#include <stdio.h>
int main(void)
{
    int total_marks = 456, num_studs = 5;
    double avg_marks1, avg_marks2;

    avg_marks1 = total_marks / num_studs;
    avg_marks2 = (double) total_marks / num_studs;

    printf("avg_marks1 : %f \n", avg_marks1);
    printf("avg_marks2 : %f \n", avg_marks2);

    return 0;
}
