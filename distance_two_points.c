//Write a C program to calculate the distance between the two points
#include <stdio.h>
#include <math.h>

int main(){
    int x1, y1, x2, y2, distance;


    printf("Input x1: ");
    scanf("%d", &x1);

    printf("Input y1: ");
    scanf("%d", &y1);

    printf("Input x2: ");
    scanf("%d", &x2);

    printf("Input y2: ");
    scanf("%d", &y2);

    distance = pow(x2-x1, 2) + pow(y2-y1, 2);
    printf("Distance between the said points: %f\n", sqrt(distance));

    return 0;
}
