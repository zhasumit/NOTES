/*Write a program to print a pattern in the following fashion 
the number of rows must be of desired length of the user 
*
**
*****
*******
*********
*******
*****
***
*.... AND so on 
*/
#include <stdio.h>
int main()
{
    int count;
    printf("Enter the height of the pyramid : ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j+2)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i <= count; i++)
    {
        for (int j = count - 1; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}