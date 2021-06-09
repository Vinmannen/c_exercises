//Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point)
#include <stdio.h>

int main(){
    int km, liters;
    float total;

    printf("Input total distance in KM: ");
    scanf("%d", &km);

    printf("Input total fuel spent in liters: ");
    scanf("%d", &liters);

    total = km / liters;
    printf("Average consumption (km/lt): %.2f\n", total);


    return 0;
}
