/*
Wrrite a program to print the patterns in the following fashion
1 
1 2  
1 2 3 
1 2 3 4 
1 2 3 4 5 .... and so on 
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows of the pattern : \n");
    scanf("%d", &num);
    for (int i = 0; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}