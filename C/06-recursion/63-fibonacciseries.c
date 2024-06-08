#include <stdio.h>
void fib(int n)
{
    int a, b, temp;
    a = 1;
    b = 1;
    printf("Fibonacci series : %d ", a);
    for (int i = 1; i < n; i++)
    {
        printf(" %d ", b);
        temp = b;  // b is stored in temporary variable
        b = a + b; // latest number is added to b
        a = temp;  // a is assigned previous value of b
    }
}
int main()
{
    int n;
    printf("Enter the num of fibonacci series : \n");
    scanf("%d", &n);
    fib(n);
    return 0;
}
