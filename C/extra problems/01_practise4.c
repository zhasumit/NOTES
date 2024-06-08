// Write a program to calculate the simple interest for a set of values representing principle, rate of interesr and time in years
#include <stdio.h>
int main()
{
    float principle = 1200, rate = 6.8, time = 2;
    float SI = (principle * rate * time) / 100;
    printf("Principle : %f\n ", principle);
    printf("Rate : %f\n ", rate);
    printf("Time : %f\n ", time);
    printf("The Simple interst for above data is : %f\n ", SI);
    return 0;
}