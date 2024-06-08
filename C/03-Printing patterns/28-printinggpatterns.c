#include <stdio.h>
int main()
{
    int num;
    printf("Enter the height of the pyramid\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num - i; j++)
        {
            printf(" ");
        }
        printf("/");
        for (int j = 0; j < 2 * i; j++)
        {
            printf(" ");
        }
        printf("\\\n");
    }
    return 0;
}