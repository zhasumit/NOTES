/*
Write a program to print the pattern in the following fashion
    *
   ***
  *****
 *******
*********..... and so on 
*/
#include <stdio.h>
int main()
{
    int space, count;
    printf("Enter the number of rows of the pyramid \n");
    scanf("%d", &count);
    for (int i = 0; i <= count; i++)
    {
        for (space = 1; space <= (count - i); space++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
}