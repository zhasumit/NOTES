/*
Write a program to print the pattern in the followinf fashion
1 
22
333
4444
55555
666666 .......
and so on take the height of the pyramid via user input 
*/
#include <stdio.h>
int main()
{
    int breadth;
    printf("Enter the value of length of pyramid ");
    scanf("%d", &breadth);
    for (int i = 1; i <= breadth; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}