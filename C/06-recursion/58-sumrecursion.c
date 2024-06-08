#include <stdio.h>
int next(int a)
{
    if (a == 0)
        return 0;
    return next(a - 1) + a;
}
int main()
{
    int a;
    printf("Enter the value of number upto which you need to find the next : \n");
    scanf("%d", &a);
    int ans = next(a);
    printf("%d", ans);
    next(a);
}