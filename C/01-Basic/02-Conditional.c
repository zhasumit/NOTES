#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the value of a : ");
    scanf("%d", &a);

    printf("Enter the value of b : ");
    scanf("%d", &b);

    a >= b ? printf("a is greater than or equal to b") : printf("b is smaller than a ");
}