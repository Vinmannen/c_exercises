// Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour. Print the employee's ID and salary (with two decimal places) of a particular month
#include <stdio.h>

int main(){
    char id[10];
    int hours;
    float salary;

    printf("Input the Employees ID(Max. 10 chars): ");
    scanf("%s", id);

    printf("Input the working hrs: ");
    scanf("%d", &hours);

    printf("Salary amount/hr: ");
    scanf("%f", &salary);

    printf("Employees ID: %s\n", id);
    printf("Salary: %.2lf$\n", salary * hours);

    return 0;    
}