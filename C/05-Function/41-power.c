#include <stdio.h>
int power(int base, int exponent)
{
    int ans = 1;
    for (int i = 0; i < exponent; i++)
    {
        ans = ans * base;
    }
    printf("Ans: %d", ans);
}
int main()
{
    int base, exponent;
    printf("Enter the base value: ");
    scanf("%d", &base);
    printf("Enter the exponent value: ");
    scanf("%d", &exponent);
    power(base, exponent);
}