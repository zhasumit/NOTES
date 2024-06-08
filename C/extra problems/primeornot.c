#include <stdio.h>
int main()
{
    int num, factor;
    printf("Enter a number to check if it is prime of not : ");
    scanf("%d", &num);
    // finding the prime numbers using FOR loop
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            factor++;
        }
    }
    if (factor == 0)
        printf("The number is PRIME");
    if (factor != 0)
        printf("The number is NOT PRIME");

    // finding the prime numbers using WHILE loop
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
            factor++;
        i++;
    }
    if (factor == 0)
        printf("\nThe number is PRIME");
    if (factor != 0)
        printf("\nThe number is NOT PRIME");

    // finding the prime numbers using DO WHILE loop
    i = 2;
    do
    {
        if (num % i == 0)
            factor++;
        i++;
    } while (i < num);
    if (factor == 0)
        printf("\nThe number is PRIME");
    if (factor != 0)
        printf("\nThe number is NOT PRIME");
    return 0;
}