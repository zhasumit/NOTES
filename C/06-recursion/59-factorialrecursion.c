#include <stdio.h>
int factorial(int a)
{
    if (a <= 1)
        return 1;
    return factorial(a - 1) * a;
}
int main()
{
    int number;
    printf("Enter the number to get its factorial : ");
    scanf("%d", &number);
    int ans = factorial(number);
    printf("Answer : %d", ans);
    return 0;
}