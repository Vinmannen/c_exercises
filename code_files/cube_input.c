//Write a program in C to display the cube of the number upto given an integer.
#include <stdio.h>

int main(){
    int in;

    printf("Input number of terms: ");
    scanf("%d", &in);

    for (int i = 1; i < in+1; i++){
        printf("Number is: %d and the cube is: %d\n", i, i * i * i);
    }
    printf("\n");

    return 0;
}