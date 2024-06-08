/*
Write a program to print the pattern in the followinf fashion
1 
2 3  
4 5 6 
7 8 9 10  
11 12 13 14 15 
16 17 18 19 20 21  .......
and so on take the height of the pyramid via user input 
*/
#include <stdio.h>
int main()
{
    int length, a = 0;
    printf("Enter the length of the pyramid ");
    scanf("%d", &length);
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j < i; j++)
        {
            a++;
            printf("%d \t", a);
        }
        printf("\n");
    }
}