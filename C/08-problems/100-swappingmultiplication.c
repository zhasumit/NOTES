#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of first variavle \"a\":");
    scanf("%d", &a);
    printf("Enter the value of second variavle \"b\":");
    scanf("%d", &b);
    a = a * b; // let a=10 and b=6 so a*b=60 stored in a so a=60
    b = a / b; // so a/b=60/6=10 which is stored in b so b=10
    a = a / b; // so a/b=60/10= 6 which is stored in a so a=6
    // hence the value of a and b are swapped
    printf("The value of \"a\" after being swapped is \"a\"=%d", a);
    printf("The value of \"b\" after being swapped is \"b\"=%d", b);
    return 0;
}