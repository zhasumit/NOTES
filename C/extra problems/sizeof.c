#include <stdio.h>
int main()
{
    //Here the sizeof(int) returns the value that int occupies in the memory
    printf("%lu\n", sizeof(int));
    printf("%d\n", sizeof(float));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(double));
    return 0;
}