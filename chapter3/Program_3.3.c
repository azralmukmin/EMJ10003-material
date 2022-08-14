// Program_3.3.c
// Addition program
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int input1; // first number to be entered by user
    int input2; // second number to be entered by user
    int sum; // variable in which sum will be stored

    printf("Enter first integer: "); // prompt
    scanf("%d", &input1); // read an integer

    printf("Enter second integer: "); // prompt
    scanf("%d", &input2); // read an integer

    sum = input1 + input2; // assign total to sum

    printf("Sum is %d\n", sum); // print sum

} // end function main

