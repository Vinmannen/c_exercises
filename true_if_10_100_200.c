//Write a C program to check a given integer and return true if it is within 10 of 100 or 200
#include <stdio.h>

int main(){
    int x;

    printf("Input an integer: ");
    scanf("%d", &x);

    if((x >= 10) && (x <= 200)){
        puts("True");
    }else {
        puts("False");
    }

}