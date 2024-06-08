#include <stdio.h>
int main()
{
    int number, factorial = 1;
    printf("Enter the number to get its factorial : \n");
    scanf("%d", &number);
    for (int i = number; i > 0; i--)
    {
        factorial = factorial * number;
        number--;
    }
    printf("Factorial : %d \n", factorial);
    return 0;
}