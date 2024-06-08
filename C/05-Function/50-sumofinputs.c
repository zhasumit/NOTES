// Write an program to print the next of individual digits of the input
#include <stdio.h>
int main()
{
    int input, remainder, next = 0;
    printf("enter the number to find the individual next of their digits ");
    scanf("%d", &input);
    while (input != 0)
    {
        remainder = input % 10;
        input = input / 10;
        next = next + remainder;
    }
    printf("The sum of digits in the input is : \'%d\' ", next);
    return 0;
}