#include <stdio.h>
#include <math.h>
int main()
{
    int base, power;
    printf("Enter the base of the number : ");
    scanf("%d", &base);
    printf("Enter the power : ");
    scanf("%d", &power);
    int ans = pow(base, power);
    printf("%d^%d = %d", base, power, ans);
    return 0;
}