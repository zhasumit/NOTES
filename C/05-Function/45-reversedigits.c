#include <stdio.h>
int reverse()
{
    long int digit;
    printf("Enter the number: \n");
    scanf("%d", &digit);
    while (digit != 0)
    {
        int rem = digit % 10;
        digit = digit / 10;
        printf("%d", rem);
    }
    return 0;
}
int main()
{
    reverse();
    return 0;
}