#include <stdio.h>
int main()
{
    int a = 20;
    float b = 45.25;
    void *p;
    p = &a;
    printf("Integer pointer : %d \n", *((int *)p));
    p = &b;
    printf("Floating pointer : %f \n", *((float *)p));
}