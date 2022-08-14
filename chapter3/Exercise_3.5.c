// Exercise_3.5.c

#include <stdio.h>

int main()
{
    char day1[15], day2[15], day3[15];

    printf("Enter any three days in a week: ");
    scanf("%s %s %s", day1, day2, day3);

    printf("\nThe three days you entered are: \n");
    printf("\n%s, %s and %s\n", day1, day2, day3);

    return 0;
}

