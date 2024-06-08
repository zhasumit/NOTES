#include <stdio.h>
int main()
{
    int a = 23;
    int *ptr = &a;
    int **pptr = &ptr;
    printf("The value of a is : %u\n", a);
    printf("The address of a is : %p\n", ptr);
    printf("The value of pointer is : %u\n", *ptr);
    printf("The address of pointer is : %p\n", pptr);
    printf("The address of pointer to pointer is : %p\n", &pptr);
    printf("The value of pointer to pointer is : %u\n", pptr);
}