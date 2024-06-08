#include <stdio.h>
int main()
{
    int a = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            a++;
        }
    }
    // for every value of i =0 1 2 3
    // j iterates four times
    printf("%d\n", a);
    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Loop: %d \n", i);
        for (int j = 0; j < 4; j++)
        {
            printf("%d %d %d \n", i, j, a);
            a++;
        }
    }

    return 0;
}
// first the outer loop runs four times so does the inner loop and since for every inner loop outer loop also iterates alongside so the total number of times the loops get iterated is #times outer loop iterate * #times inner loop iterates