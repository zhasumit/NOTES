/*
Write a program to print the pattern in the followinf fashion
*
**
***
****
*****
------and so on take the height of the pyramid via user input
*/
#include <stdio.h>
int main()
{
    int breadth;
    printf("Enter the value of length of pyramid ");
    scanf("%d", &breadth);

    for (int i = 0; i < breadth; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}