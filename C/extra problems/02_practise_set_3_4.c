// Q3Write a program to check if a number is divisible by 97 or not
#include <stdio.h>
int main()
{
    int input;
    printf("Enter a number to see if it is divisible by \'97\' : ");
    scanf("%d", &input);
    if (input % 97 == 0)
        printf("The number is \"DIVISIBLE\" by 97");
    else
        printf("The number is \"NOT DIVISIBLE\" by 97");
    
    // Q4Step by step evaluation of 3*x/y-z+k
    int x=2,y=3,z=3,k=1;
    printf("\n3*x/y-z+k : %d",3*x/y-z+k);
    // 3 * x / y - z + k
    // 3 * 2 / 3 - 3 + 1
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // 0

    return 0;
}