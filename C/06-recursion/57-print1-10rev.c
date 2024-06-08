#include <stdio.h>
void fun(int a)
{
    if (a == 0)
        return;
    printf("%d\n", a);
    fun(a - 1);
}
int main()
{
    int a = 10;
    fun(a);
    return 0;
}