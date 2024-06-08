#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers for comparison\n");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("First is smaller than the second number \n");
    }
    else if (a = b)
    {
        printf("The given numbers are equal\n");
    }
    else
    {
        printf("Second number is smaller than the first number \n");
    }

    // comparision in some twist
    int p = 5, q = 30, r = 200;

    int result = r > q > p;
    // here (r>q)>p is taken care of here r>q is true so it gives 1 and then 1 is compred to P which is smller so the value of the comparision is false and hence the output is 0
    printf("%d", result);
    return 0;
}