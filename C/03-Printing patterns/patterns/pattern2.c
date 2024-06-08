/*
Wrrite a program to print the patterns in the following fashion
*****.... and so on 
****
***
** 
*
INverted pyramid 
*/
#include <stdio.h>
int main()
{
    int count;
    printf("Enter the number of rows of the inverted pyramid:\t");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = count; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n-------------------------------------\n");
    printf("Same output different way of coding ");
    printf("\n-------------------------------------\n");
    for (int i = count; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}