#include <stdio.h>
void fun(int a)
{
    if (a == 0)
        return;
    printf("%d\n", a);
    int b = a - 1;
    fun(b); // function calling itself inside itself is called recursion of functions
}
int main()
{
    int a = 5;
    fun(a);
    return 0;
}