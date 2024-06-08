#include <stdio.h>
int main()
{
    int a = 4, b = 5, c = -2; // Type declararation
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);
    float A = 9.435;
    float B = A + A;
    printf("The value of A is %f\n", A);
    printf("The value of B is %f\n", B);
    // arithmetic instruction
    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);
    printf("The value of a*b is %d\n", a * b);
    printf("The value of a/b is %d\n", a / b);
    printf("The remainder of a/b is %d\n", a % b);
    printf("The remainder of b/a is %d\n", b % a);
    // b + c = a is illegal since the associativity of the assignment operator is right to left
    // a = b + c is legal since the associativity of the assignment operator is right to left
    return 0;
}