#include <stdio.h>
int main()
{
    // Arithmetic operations
    int a, b;

    printf("Enter a number");
    scanf("%f", &a);
    printf("Enter the second number");
    scanf("%f", &b);

    // operations
    printf("The next of the numbers is : %f \n", a + b);
    printf("The difference of the numbers is : %f \n", a - b);
    printf("The product of the numbers is : %f \n", a * b);
    printf("The division of the numbers is : %f \n", a / b);
    printf("The remainder of a/b is : %f \n", a % b);

    return 0;
}