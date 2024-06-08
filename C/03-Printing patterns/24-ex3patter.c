/*
Write a Program to write the following patterns
****
****
****
****

*/
#include <stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    {
        for (int i = 0; i < 4; i++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*Write a program to print a rectangle same as above examples but taking the user input*/
    // interactive nested looping
    int length, breadth;
    printf("Enter the length of the rectangle\n");
    scanf("%d", &length);
    printf("Enter the length of the rectangle\n");
    scanf("%d", &breadth);

    for (int i = 0; i < breadth; i++)
    {
        for (int i = 0; i < length; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}