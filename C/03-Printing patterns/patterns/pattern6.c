/*
Wrrite a program to print the patterns in the following fashion
1 
2  3  
4  5  6  
7  8  9  10  
11 12 13 14 15  .... and so on 
*/
#include <stdio.h>
int main()
{
    int count, a = 1;
    printf("Enter the number of rows: \n");
    scanf("%d", &count);
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d\t", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}