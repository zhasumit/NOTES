/*
Write a program to print the pattern in the following fashion
      * 
     * *
    * * *
   * * * *
  * * * * *..... and so on 
*/
#include <stdio.h>
int main()
{
    int space, count;
    printf("ENter the number if rows: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        for (int space = 0; space <= count - i; space++)
            printf(" ");
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}