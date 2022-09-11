// Program_7.18.c
#include <stdio.h>
#define NUM_MONTH 12
#define SIZESTRING 10

int main(void){

    char month[NUM_MONTH][SIZESTRING] =
	{"January", "February", "March", "April",
  	 "May", "Jun", "July", "August", "September",
        "October", "November", "December"};

    int day[NUM_MONTH]= {31, 28, 31, 30, 31, 30, 31,
			      31, 30, 31, 30, 31};

    for(int i = 0; i < NUM_MONTH; i++) {
        printf("%s has %d days\n", month[i], day[i]);

    }
}
