#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 numbers for any operations \n");
    scanf("%d %d", &a, &b);
    printf("Enter option for desired operation\n 1 - Addition \n2 - Substraction \n 3 - Division \n 4 -Multiplication \n");
    int x;
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("%d", a + b);
        break;
    case 2:
        printf("%d", a - b);
        break;
    case 3:
        printf("%d", a / b);
        break;
    case 4:
        printf("%d", a * b);
        break;
    default:
        printf("Invalid Input\n");
    }
    return 0;
}
#include <stdio.h>

int main()
{
    char Operator;
    float num1, num2, result = 0;

    printf("\n Please Enter an Operator (+, -, *, /):  ");
    scanf("%c", &Operator);

    printf("\n Please Enter the Values for two Operands: num1 and num2:  ");
    scanf("%f%f", &num1, &num2);

    switch (Operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        printf("\n You have entered an Invalid Operator ");
    }

    printf("\n The result of %.2f %c %.2f  = %.2f", num1, Operator, num2, result);

    return 0;
}