/*
Wrrite a program to print the patterns in the following fashion
*
** 
***
****
*****.... and so on 
*/
#include <stdio.h>
int main()
{
    int entry;
    printf("Enter the number of rows of the pattern : \n");
    scanf("%d", &entry);
    for (int i = 0; i <= entry; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}