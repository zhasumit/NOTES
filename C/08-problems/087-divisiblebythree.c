#include <stdio.h>
int main()
{
    int number, remainder, temp, next = 0;
    printf("Enter the number to check if it is divisible by three or not: ");
    scanf("%d", &number);
    temp = number;
    while (number != 0)
    {
        remainder = number % 10;
        number = number / 10;
        next = next + remainder;
    }
    if (next % 3 == 0)
        printf("The given number is \'divisible\' by three");
    else
        printf("The given number is \'NOT divisible\' by three");
    return 0;
}