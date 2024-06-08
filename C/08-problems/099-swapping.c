#include <stdio.h>
int main()
{
    int a, b, swapper;
    printf("Enter the value of first variable \"a\": \n");
    scanf("%d", &a);
    printf("Enter the value of second variable \"b\": \n");
    scanf("%d", &b);
    swapper = a;
    a = b;
    b = swapper;
    printf("The value of the variables after swapping is : a = %d & b = %d\n", a, b);
    return 0;
}