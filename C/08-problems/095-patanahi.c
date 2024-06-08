#include <stdio.h>
int main()
{
    int a = 9;
    int b = 24;
    int temp;
    int n;
    printf("Enter the number of terms in the series : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a);
        a = a + b;
        b = b + 16;
    }
    return 0;
}