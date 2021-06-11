//write a program in C to read 10 numbers from keyboard and find their sum and average
#include <stdio.h>

int main(){
    int in, sum = 0;
    float av;

    for (int i = 1; i < 11; i++){
        printf("Number-%d: ", i);
        scanf("%d", &in);
        sum += in;
    }
    av = sum/10.0;
    printf("\nThe sum is: %d\nThe average is: %f\n", sum, av);

    return 0;
}