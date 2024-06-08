#include <stdio.h>
int main()
{
    int i = 11;

    while (i < 11)
    {
        printf("This is while loop \n");
        i += 2;
    }

    do
    {
        printf("This is while loop \n ");
        i += 2;
    } while (i < 11);

    return 0;
}