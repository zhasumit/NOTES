#include <stdio.h>
int main()
{
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", i);
    }

    printf("-------\n");

    int j;
    for (j = 0; j < 26; j += 5)
    {
        printf("%d\n", j);
    }
    printf("%d", j);
}