#include<stdio.h>
int main()
{
    int a;
    printf("Enter number : ");
    scanf("%d", &a);
    printf("\n");
    printf("Prime Factors of %d : ", a);
    for ( int i = 2; a > 1; i++)
    {
        while (a % i == 0)
        {
            printf("%d\n", i);
            a = a / i;
        }
    }
    return 0;
}