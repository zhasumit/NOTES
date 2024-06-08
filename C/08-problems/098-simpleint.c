//Write a program to enter the principle rate and time and get the value of simple interest
#include <stdio.h>
int main()
{
    float principle, rate, time;
    printf("Enter the vlaue of Principal : \n");
    scanf("%f", &principle);
    printf("Enter the vlaue of Rate in ANNUAL terms : \n");
    scanf("%f", &rate);
    printf("Enter the vlaue of Time in ANNUAL terms: \n");
    scanf("%f", &time);
    float simple_interst = ((principle * rate * time) / 100);
    printf("Your simple interest is %f \n", simple_interst);
    printf("Your total amount is %f \n", simple_interst + principle);
    return 0;
}