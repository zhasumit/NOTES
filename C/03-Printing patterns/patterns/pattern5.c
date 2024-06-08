/*
Wrrite a program to print the patterns in the following fashion
1 
2 2 
3 3 3 
4 4 4 4  
5 5 5 5 5 .... and so on 
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
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}