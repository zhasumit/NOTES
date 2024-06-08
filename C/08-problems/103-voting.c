// Write a program to enter the age of a person and determine if he/she is eligible to vote or not
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age >= 18)
        printf("You're eligible for voting. ");
    else
        printf("You're NOT eligible for voting. ");
    return 0;
}