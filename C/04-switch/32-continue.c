#include <stdio.h>
int main()
{
    int j = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("Enter the value of j \n");
            scanf("%d", &j);
            printf("The value of j : %d \n", j);
            if (j > 100)
                continue; // the looop reiterates and goes to the inner loop again
        }
        printf("--------------Inner loop Ends-----------\n");
    }
    printf("--------------Outer loop Ends------------\n");

    return 0;
}