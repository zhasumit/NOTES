/*Find the number of zeroes and ones inthe binary equivalence of the input decimal digits */
#include <stdio.h>
int main()
{
    int input, temp, rem, ones = 0, zeroes = 0;
    temp = input;
    printf("Enter the number a : ");
    scanf("%d", &input);
    while (input != 0)
    {
        rem = input % 2;
        input = input / 2;
        printf("%d\n", rem);
        if (rem == 1)
            ones = ones + 1;
        else
            zeroes = zeroes + 1;
    }
    printf("There are %d ones and %d zeroes in the binary conversion of the input", ones, zeroes);
    return 0;
}
/*
ones = 0;
    zeroes = 0;
    input = temp;
    while (input != 0)
    {
        if ((input & 1) / 2 == 1)
            ones = ones + 1;
        if ((input & 1) / 2 == 0)
            zeroes = zeroes + 1;
        input = input >> 1;
    }
    printf("ones = %d :: Zeroes = %d", ones, zeroes);
*/