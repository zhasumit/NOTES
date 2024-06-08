/*
Write a program to print the pattern in the followinf fashion
1 
1 2 
1 2 3
1 2 3 4 
1 2 3 4 5 
1 2 3 4 5 6 .......
and so on take the height of the pyramid via user input 
*/
#include <stdio.h>
int main()
{
    int length;
    printf("Enter the value of length of pyramid ");
    scanf("%d", &length);
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}