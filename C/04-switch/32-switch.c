#include <stdio.h>
int main()
{
    int day;
    printf("Enter the day number for any week \n");
    scanf("%d", &day);
    switch (day) // here in the brackets we put the conditional statements
    {
    case 1:
        // case has the stuff that if it matches the result coming out of the conditional statements the statments are executed
        printf("The day is SUNDAY \n");
        break; // break is written after every case
        // if the break; is not put at end of every case so the next case ALSO gets executed since it understands that all the cases that are writen below it are TRUE and it would walkthrough
    case 2:
        printf("The day is MONDAY\n");
        break;
    case 3:
        // case:-------- the dashes contain the answer that must match in order to print the statements in that case block
        printf("The day is TUESDAY \n");
        break;
    case 4:
        printf("The day is WEDNESDAY \n");
        break;
    case 5:
        printf("The day is  THRUSDAY\n");
        break;
    case 6:
        printf("The day is  FRIDAY\n");
        break;
    case 7:
        printf("The day is  SATURDAY\n");
        break;

    default:
        printf("The entry is NOT ACCEPTABLE \n");
        break;
        // if the value doesnt match your e
    }
}