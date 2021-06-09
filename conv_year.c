// Write a C program to convert specified days into years, weeks and days
#include <stdio.h>

int main(){
    int days = 1000;
    int years;
    int weeks;

    years = days / 365;
    printf("Years: %d\n", years);

    weeks = days / 52;
    printf("Weeks: %d\n", weeks);

    return 0;
}
