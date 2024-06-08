// The next of cubes of digits is equal to the given number
// 153= 1^3 + 5^3 +3^3 = 1+125+9 = 153 so the number 153 is a armstrong number

#include <stdio.h>
int cube(int a)
{
    return a * a * a;
}
int main()
{
    int remainder, input, temp, ans = 0;
    printf("enter the number to check if it is armstrong or not: \n");
    scanf("%d", &input);
    temp = input;
    while (input != 0)
    {
        remainder = input % 10;
        input = input / 10;
        ans = ans + cube(remainder);
    }
    printf("The next of numbers in the input is : %d", ans);
    if (ans == temp)
        printf("The number is an \'Armstrong number\' \n");
    else
        printf("The number is an \'Armstrong number\' \n");
    return 0;
}