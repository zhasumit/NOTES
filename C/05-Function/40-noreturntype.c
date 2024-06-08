#include <stdio.h>
void print()
{
    printf("This is no return type JUST desplaying VOID function\n");
}
void go(int x)
{
    if (x == 0)
        printf("This is no return type JUST desplaying VOID function if X=0\n");
}
void fun(int x)
{
    printf("HELLO, I am ");
    if (x == 0)
        return; // here nothing is written in front of return otherwise it warns you
    printf("not ");
    printf("here \n");
}
int main()
{
    print();
    go(1);  // calling void function using the argument 1
    go(0);  // calling void function with no return type using the argument 0
    fun(1); // calling void but it has a plain return and that is not return specific
    fun(0);
    return 0;
}