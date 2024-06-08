#include <stdio.h>
int main()
{
    int i = 0, count;
    printf("Enter the number of times you want to increment: ");
    scanf("%d", &count);
    do
    {
        printf("i : %d\n", i + 1);
        i++;
    } while (i < count);
    return 0;
}