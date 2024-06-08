#include <stdio.h>
int main()
{
    //hardcore assigning the value of different array indicies
    int arr[5] = {12, 42, 73, 24, 56}; // declaration of array i.e. arr
    for (int i = 0; i < 5; i++)
        printf("The value of %dth index is %d\n", i, arr[i]);
    // so here in arr[i] the ith index of the array is called for

    //---------------------*----------------------------

    // user defined input and output for the arrays
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of %dth index ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
        printf("The value of %dth index is %d\n", i, arr[i]);
    // if an array of prespecified size is not given any value at any index so, it contins the garbage value there
    int age[10] = {10, 20, 56, 78, 94};
    for (int i = 0; i <= 10; i++)
        printf("index %dth : %d \n", i, age[i]);
    printf("so the values other than defined ones are garbage value");

    // unspecified size of array is automatically adjusted like
    float marks[] = {99, 56, 58, 35, 78, 89};
    // so here the size of array is not specified and as per the initialisation the size of array is fixed
    return 0;
}