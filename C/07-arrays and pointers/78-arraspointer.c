#include <stdio.h>
int main()
{
    int arr[] = {11, 22, 33, 44, 55, 66, 77, 88, 99};
    for (int i = 0; i < 9; i++)
        printf("%p\n", arr + i);
    // so array acts as the pointers for the memory allocation onthe different blocks
}