// PERFECT NUMBER:
// The number in which the next of factors(EXCLUDING number itself) of a given number is equal to the number itself
// 6[1,2,3,6] => 1+2+3 =6 hence 6 is a perfect number
// Similarly, 28[1,2,4,7,14,28] => 1+2+4+7+14 = 28 so 28 is also a perfect number
#include <stdio.h>
int main()
{
    int temp, input, next = 0, remainder;
    printf("Enter the number to check if it is perfect or not : \n");
    scanf("%d", &input);
    temp = input;
    for (int i = 1; i <= (input / 2); i++)
    {
        remainder = input % i;
        if (remainder == 0)
            next = next + i;
    }
    if (next == input)
        printf("The number is a \'perfect number\' ");
    else
        printf("The number is \'NOT\' a perfect number ");
    return 0;
}