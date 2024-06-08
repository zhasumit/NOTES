/*
Wrrite a program to print the patterns in the following fashion
A B C D E..... 
A B C D 
A B C
A B 
A
.... and so on 
*/
#include <stdio.h>
int main()
{
    int count;
    printf("Enter the height of the pyramid : ");
    scanf("%d", &count);
    for (int i = count; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            int a = 65;
            printf("%c ", a + j);
        }
        printf("\n");
    }

    return 0;
}