//Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30
#include <stdio.h>

int main(){
    int int1, int2, sum;

    printf("Enter int1: ");
    scanf("%d", &int1);

    printf("Enter int2: ");
    scanf("%d", &int2);

    sum = int1 + int2;
    if ((sum == 30) || (int1 == 30) || (int2 == 30)){
        puts("True.");
    }else {
        puts("False.");
    }

    return 0;
}
