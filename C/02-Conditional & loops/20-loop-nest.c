#include <stdio.h>
int main()
{
    int k = 0;
    printf("Starting of outer Loop\n\n\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Starting of Inner Loop\n");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", k);
            k++;
        }
        printf("\nEnding of inner  loop\n\n");
    }
    printf("\nEnding of Outer Loop\n");
    return 0;
}
// --------Simply Run the program to understand -----------------