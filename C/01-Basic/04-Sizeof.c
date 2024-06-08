// Sizeof operator gives the value of different data types in bytes
#include <stdio.h>
int main()
{
    int var;
    printf("Size of int %d \n", sizeof(int));
    printf("Size of float %d\n", sizeof(float));
    printf("Size 0f var = %d\n", sizeof(var));

    printf("Size of an integer constant = %d \n", sizeof(45));
}