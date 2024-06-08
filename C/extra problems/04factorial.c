#include <stdio.h>
int main()
{
    int num, factorial = 1;
    printf("Enter the number to get its factorial: ");
    scanf("%d", &num);
    // factorial using the FOR loop
    for (int i = num; i > 1; i--)
        factorial *= i;
    printf("\"FOR\" Factorial of %d is %d", num, factorial);

    // factorial using the WHILE loop
    int i = num;
    factorial = 1;
    while (i > 1)
    {
        factorial *= i;
        i--;
    }
    printf("\n\"WHILE\" Factorial of %d is %d", num, factorial);

    // factorial using the DO WHILE loop
    i = num, factorial = 1;
    do
    {
        factorial *= i;
        i--;
    } while (i > 1);
    printf("\n\"DO WHILE\" Factorial of %d is %d", num, factorial);
    return 0;
}