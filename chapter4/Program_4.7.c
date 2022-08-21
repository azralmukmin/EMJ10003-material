// Program_4.7.c
#include <stdio.h>
int main(void){
    int age;
    char name[20], gender, marital_status;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Gender [Male (M) or Female (F)]: ");
    scanf(" %c", &gender);

    printf("Marital status [Single (S) or Married (M)]: ");
    scanf(" %c", &marital_status);

    if(gender == 'M')
        if(marital_status == 'S')
            if(age <= 26)
                if(age >= 20)
                    printf("\n%s passed\n", name);
    return 0;
}
