#include <stdio.h>
int Print_all_digits()
{
    long int digit;
    printf("Enter the number to get its digits printed: \n");
    scanf("%d", &digit);
    printf("All the digits in the entered number are : \n ");
    while (digit != 0)
    {
        int rem = digit % 10;
        digit = digit / 10;
        printf("%d \t", rem);
    }
    return 0;
}
int main()
{
    Print_all_digits();
    return 0;
}