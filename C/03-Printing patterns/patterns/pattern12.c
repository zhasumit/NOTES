/*
Wrrite a program to print the patterns in the following fashion
A
B C 
D E F 
G H I J 
K L M N O .... and so on 
*/
#include <stdio.h>
int main()
{
    int count;
    int a = 65;
    printf("ENter the height of the pyramid ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}