#include <stdio.h>
int main()
{
    int a = 10;
    int b = 3;
    float ans = a / b;

    printf("%f\n", ans);
    //  11     11
    a = ++a + a++;

    // here the value of a turns out to be 22+1 i.e.,23
    printf("%d", a);
    return 0;
}