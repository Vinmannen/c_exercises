// Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches
#include <stdio.h>

int main(){
    int height = 7;
    int width = 5;
    int perimeter;
    int area;

    perimeter = height * 2 + width * 2;
    printf("Perimeter of the rectangle = %d inches\n", perimeter);

    area = height * width;
    printf("Area of the rectangle = %d inches\n", area);

    return 0;
}
