#include <stdio.h>
void swapvalue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    // here the arguments passes from a are local and hence they are not changed
    printf("THe swapped value of a : %d and b : %d\n", a, b);
}
void swapvar(int *a, int *b) // so we take the value of a and b by dereferencing them from their respective locations
{
    int temp = *a; // so temp stores the value of a at the location of a
    *a = *b;       //value at adress of a is replaced by the value at address of b
    *b = temp;     //value at address of b is replaced by the value of temporary variable
    printf("THe swapped value of a : %d and b : %d\n", a, b);

    // And hence since the actual value at the variable locations are altered
    //so the local variables of the main function are altered
}
int main()
{
    int a, b;
    printf("ENter the value of a and b \n");
    scanf("%d%d", &a, &b);
    swapvalue(a, b);
    printf("a = %d , b = %d\n", a, b);
    // CALL BY REFERENCE
    swapvar(&a, &b); // here we pas the location of the variables so the actual value of that location gets passed
    printf("a = %d , b = %d\n", a, b);
    return 0;
}