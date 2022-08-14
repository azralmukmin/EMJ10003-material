// Exercise_3.2.c

#include <stdio.h>

int main(void)
{
    int input1, input2, sum;

    printf("Hi, Azralmukmin!\n");
    printf("************************\n");
    printf("Welcome to C programming\n");
    printf("************************\n\n");

    printf("Enter first integer: "); // prompt
    scanf("%d", &input1); // read an integer

    printf("Enter second integer: "); // prompt
    scanf("%d", &input2); // read an integer

    sum = input1 + input2; // assign total to sum

    printf("\nThe output of %d + %d is %d\n", input1, input2, sum); // print sum

    return 0;
}

