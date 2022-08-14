// Program_3.10.c
// Reading integers from keyboard
#include <stdio.h>

int main( void )
{
    int a,b,c;

    printf("Enter three integers : ");
    scanf("%d %d %d", &a,&b,&c);

    printf("\nThe input displayed as decimal integer :\n");
    printf("%5d %5d %5d\n",a,b,c);

    return 0;
}


