#include <stdio.h>
int main ()
{
    int num;
    printf("Enter the number upto which you need to print the number : ");
    scanf("%d",&num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <=10 ; j++)
        {
            printf("%d * %d = %d", i,j,i*j);
            printf("\n");
        }
        printf("\n");
    }
    
}