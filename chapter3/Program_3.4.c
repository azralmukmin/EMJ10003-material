// Program_3.4.c
// Calculate volume cylinder program
#include <stdio.h>

// function main begins program execution
int main(void)
{
    int high, radius; // the values to be entered by user
    float volume; // variable for result to be stored
    const float PI = 3.142; // pi value 3.142
    char letter = 'B'; // label of the cylinder

    printf("\nEnter the high: "); // prompt
    scanf("%d", &high); // read an integer

    printf("Enter the radius: "); // prompt
    scanf("%d", &radius); // read an integer

    // assign result to volume
    volume = PI * high * radius * radius;

    printf("\nVolume for cylinder %c is %f\n", letter ,volume);
} // end function main

