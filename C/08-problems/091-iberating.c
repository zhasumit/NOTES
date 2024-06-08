#include <stdio.h>
int main()
{
    int n, temp, a = 9, a1 = 24, d = 16;
    printf("enter the numer of terms in the series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a);
        for (int j = 1; j <= i; j++)
        {
            temp = (a1 + ((j - 1) * d));
            a1 = temp;
            a = a + temp;
        }
    }
}