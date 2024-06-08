#include <stdio.h>
void fun(int a)
{
    if (a == 0)
        return;
    fun(a - 1);
    printf("%d\n", a);
}
int main()
{
    int a = 10;
    fun(a);
    return 0;
}