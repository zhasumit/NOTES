#include <stdio.h>
#include <string.h>
int main()
{
    char string[30];
    printf("Enter the string to check its length : ");
    scanf("%s", string);
    int sum = 0;
    for (int i = 0; i < 30; i++)
    {
        if (string[i] != 0)
            sum = sum + 1;
        else
            break;
    }
    printf("The length of the string is : %d", sum);
    return 0;
}