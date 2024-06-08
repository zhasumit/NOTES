#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number to print its table: ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);

    // multiplication table of 10 in reversed order
    for (int i = 10; i >= 1; i--)
        printf("%d * %d = %d\n", 10, i, 10 * i);

    return 0;
}