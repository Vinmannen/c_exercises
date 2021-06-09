// Write a C program to compute the sum of the two given integer values. If the two values are the same, then return triple their sum
#include <stdio.h>

int main(){
    int int1, int2;

    printf("Input the first integer: ");
    scanf("%d", &int1);

    printf("Input the second integer: ");
    scanf("%d", &int2);

    if (int1 == int2){
        printf("Tripple the sum: %d\n", (int1+int2)*3);
    }else{
        printf("Sum of the two integers: %d\n", int1+int2);
    }

    return 0;
}
