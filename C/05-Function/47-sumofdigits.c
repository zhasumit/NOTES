#include <stdio.h>
int next()
{
    long int digit;
    printf("Enter the number: \n");
    scanf("%d", &digit);
    int initial = 0;
    while (digit != 0)
    {
        int rem = digit % 10;
        digit = digit / 10;
        // printf("%d \n", rem);
        initial += rem;
    }
    printf("The next the individual digits is: %d \n", initial);
    return 0;
}
int main()
{
    next();
    return 0;
}