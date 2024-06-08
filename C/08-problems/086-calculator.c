#include <stdio.h>
float next(float a, float b)
{
    return a + b;
}
float substract(float a, float b)
{
    return a - b;
}
float multiply(float a, float b)
{
    return a * b;
}
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    float a, b;
    char operation;
    printf("ENter the operation\n");
    scanf("%c", &operation);
    printf("ENter the first number\n");
    scanf("%f", &a);
    printf("ENter the second number\n");
    scanf("%f", &b);
    if (operation == '+')
        printf("next %f", next(a, b));
    if (operation == '-')
        printf("difference %f", substract(a, b));
    if (operation == '*')
        printf("product %f", multiply(a, b));
    if (operation == '/')
        printf("division %f", divide(a, b));
    return 0;
}