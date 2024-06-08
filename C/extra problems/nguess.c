#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int num, guess, nguess;
    srand(time(0));
    num = rand() % 100 + 1; // Generates a number between 1 and 100
    printf("The number is %d\n", num);
    // Keep running the loop untill the number is guessed correctly
    do
    {
        printf("Enter the number between 1 and 100\n");
        scanf("%d", &guess);
        if (num < guess)
            printf("Lower number please\n");

        else if (num > guess)
            printf("Higher number please\n");

        else
            printf("You guessed it right\n");
        nguess++;
    } while (num == guess);

    return 0;
}