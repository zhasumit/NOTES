#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check if it is leap or not: \n");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("It is a Leap year \n");
    else if (year % 400 == 0)
        printf("It is a Leap year \n");
    else if (year % 100 == 0)
        printf("It is NOT a Leap year \n");
    else
        printf("It is NOT a Leap year \n");
    return 0;
}