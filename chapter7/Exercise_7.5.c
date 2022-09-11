// Exercise_7.5.c
#include <stdio.h>
#define NUMCAR 6  // ROW
#define SIZESTRING 20 // COLUMN

void updateName(char carName[][SIZESTRING]);

int main(void){
    char carName[NUMCAR][SIZESTRING] = {"Proton", "Honda", "Mitsubishi",
                                  "Mazda", "Volkswagen", "Toyota"};

    printf("The 6 manufacturer car in array: \n");
    for(int i = 0; i < NUMCAR; i++)
        printf("%d : %s\n", i+1, carName[i]);

    updateName(carName);

    return 0;
}

void updateName(char carName[][SIZESTRING]){
    int choose;
    printf("\nChoose number to change: ");
    scanf("%d", &choose);

    printf("Write new name : ");
    scanf("%s", carName[choose-1]);

    printf("\nThe new updated manufacturer car in array: \n");
    for(int i = 0; i < NUMCAR; i++)
        printf("%d : %s\n", i+1, carName[i]);

}
