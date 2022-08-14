// Program_3.12.c
// Reading a strings from keyboard
#include <stdio.h>

int main(void)
{
    char a;     // define x
    char b[10]; // define an array y

    printf("\nEnter a word: ");
    scanf("%c %s", &a, b);

    printf("\nThe input was: \n");
    printf("Character \"%c\" ",a);
    printf("and the string \"%s\" \n",b);

    return 0;
}



