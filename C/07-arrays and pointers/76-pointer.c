#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of variable a : ");
    scanf("%d", &a);
    int *ptr = &a;
    printf("The memory location of the variable is %p\n", ptr);
    printf("The value of the variable is %d\n", *ptr);
    int b = *(&a); // this stores the value of a into b
    printf("The value of b : %d", b);
}