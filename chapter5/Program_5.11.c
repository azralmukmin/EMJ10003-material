// Program_5.11.c
#include <stdio.h>

int main(void)
{
    int n;

    printf("n\tn^2\tn^3\n");
    printf("-------------------\n");

    for(n = 1; n <= 10; n++)
        printf("%d\t%d\t%d\n", n, n*n, n*n*n);

    return 0;
}
