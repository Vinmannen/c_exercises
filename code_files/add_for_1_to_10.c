#include <stdio.h>

int main(){
    int sum;

    for (int i = 1; i < 11; i++){
        printf(" %d ", i);
        sum += i;
    }
    printf("\nThe sum is: %d\n", sum);

    return 0;
}
