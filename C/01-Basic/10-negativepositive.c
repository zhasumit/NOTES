#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("The number is negative");
    }
    else
    {
        printf("The number id Positive");
    }
    return 0;
}