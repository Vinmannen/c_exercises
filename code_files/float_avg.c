//rite a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items
#include <stdio.h>

int main(){
    float wItem1, nItem1, wItem2, nItem2;
    
    wItem1 = 15;
    nItem1 = 5;

    wItem2 = 25;
    nItem2 = 4;

    float total = ((wItem1 * nItem1) + (wItem2 * nItem2)) / (nItem1 + nItem2);
    printf("%f\n", total);

    return 0;

}
