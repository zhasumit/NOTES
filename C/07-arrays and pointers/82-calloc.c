#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    int *ptr;
    printf("Enter the value of n ");
    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));
    for (i = 0; i < n; i++)
        scanf("%d", &ptr[i]);
    for (i = 0; i < n; i++)
        printf("%d, ", ptr[i]);
    return 0;
}