#include <stdio.h>
int main()
{
    int count;
    printf("Enter the natural number upto which you wanna print: ");
    scanf("%d", &count);
    // incrementing for loop
    for (int i = 0; i < count; i++)
        printf("%d\n", i + 1);

    // decrementing for loop
    for (int i = count; i >= 1; i--)
        printf("%d\n", i);
    return 0;
}