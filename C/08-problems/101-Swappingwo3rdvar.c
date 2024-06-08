#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of first variable \"a\"");
    scanf("%d", &a);
    printf("Enter the value of second variable \"b\"");
    scanf("%d", &b);
    a = a + b; // suppose a=10 and b=6 so here a=16
    b = a - b; // so in prev line a=16=> a-b=10 so b=10 => b=a
    a = a - b; // so in prev line b=10 so a-b= 16-10 =6 => a=b
    printf("The value of variable after swapping : \"a\"=%d and \"b\"=%d \n", a, b);
    return 0;
}