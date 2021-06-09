//Write a C program that accepts three integers and find the highest of three
#include <stdio.h>

int main(){
    int int1, int2, int3;

    printf("Input the first integer: ");
    scanf("%d", &int1);

    printf("Input the second integer: ");
    scanf("%d", &int2);

    printf("Input the third integer: ");
    scanf("%d", &int3);

    if (int1 >= int2) {
        if (int1 >= int3)
            printf("%d is the largest number.\n", int1);
        else
            printf("%d is the largest number.\n", int3);
    } else {
        if (int2 >= int3)
            printf("%d is the largest number.\n", int2);
        else
            printf("%d is the largest number.\n", int3);
    }

    return 0;
}
