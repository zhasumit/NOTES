#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{
    int n;
    printf("Enter the range of the numbers : ");
    scanf("%d", &n);
    printf("The random number between [0 -> %d] is : %d \n", n, random(n));
    return 0;
}