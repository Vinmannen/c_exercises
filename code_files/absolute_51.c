// Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference
#include <stdio.h>

int main(){
    int x = 51, n;

    printf("Enter integer n: ");
    scanf("%d", &n);

    if (n > x){
        printf("Absolute difference trippled: %d\n", (n-x) * 3);
    }else {
        printf("Difference between n and 51: %d\n", x - n);
    }

    return 0;
}
