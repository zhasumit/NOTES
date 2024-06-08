#include <stdio.h>
int squareroot()
{
    int number;
    double precision = 0.001;
    printf("Enter the number to get its square root \n");
    scanf("%d", &number);
    while (precision * precision <= number)
    {
        precision = precision + 0.001; //updation statement for a number to turn into sq root
    }
    printf("The square root of the number is: %lf \n", precision);
    return precision;
}
int cuberoot()
{
    int number;
    double precision = 0.001;
    printf("Enter the number to get its cube root \n");
    scanf("%d", &number);
    while (precision * precision * precision <= number)
    {
        precision = precision + 0.001; //updation statement for a number to turn into cube root
    }
    printf("The cube root of the number is: %lf \n", precision);
    return precision;
}
int main()
{
    squareroot();
    cuberoot();
    return 0;
}