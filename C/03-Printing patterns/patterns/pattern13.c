/*
Wrrite a program to print the patterns in the following fashion
A
A B 
A B C 
A B C D 
A B C D E .... and so on 
*/
#include <stdio.h>
int main()
{
    int count;
    printf("ENter the height of the pyramid ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        int a = 65;
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}