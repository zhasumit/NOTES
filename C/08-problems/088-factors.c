#include <stdio.h>
int main()
{
    int number, remainder, no = 0;
    printf("Enter the number to check if it is divisible by three or not: ");
    scanf("%d", &number);

    for (int i = 1; i <= number; i++)
    {
        remainder = number % i;
        if (remainder == 0)
        {
            no++;
            if (no == 1)
                printf("%dst factor : %d \n", no, i);
            else if (no == 2)
                printf("%dnd factor : %d\n", no, i);
            else if (no == 3)
                printf("%drd factor : %d\n", no, i);
            else
                printf("%dth factor : %d\n", no, i);
        }
    }

    return 0;
}