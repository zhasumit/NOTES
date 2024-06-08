#include <stdio.h>
int main()
{
    // Finding the sum of first 10 natural numbers using the for loop
    int sum = 0;
    for (int i = 0; i <= 10; i++)
        sum += i;
    printf("sum of first 10 natural number is: %d", sum);

    // Finding the sum of first 10 natural numbers using the while loop
    sum = 0;
    int i = 1;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("\nsum of first 10 natural number is: %d", sum);

    // Finding the sum of first 10 natural numbers using the do while loop
    sum = 0, i = 1;
    do
    {
        sum += i;
        i++;
    } while (i <= 10);
    printf("\nsum of first 10 natural number is: %d", sum);

    return 0;
}