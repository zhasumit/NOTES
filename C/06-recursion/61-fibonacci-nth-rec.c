// Write a c program to print the fibonacci sequence using recursions
#include <stdio.h>
int fib(int n)
{
    if (n == 2 || n == 1)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    printf("ENter the value of n for gettng nth fibonacci number : ");
    scanf("%d", &n);
    printf("%d", fib(n));
    return 0;
}
// Function to create Nth Fibonacci number
// function uses the logic [Nth term = (N-1)th term + (N-2)th term]