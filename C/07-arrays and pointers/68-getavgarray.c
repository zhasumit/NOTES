// passing the array in a function
#include <stdio.h>
int getavg(int marks[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += marks[i];
    return sum / n;
}
int main()
{
    int n, mark[n], i;
    printf("ENter the number of values you need to enter ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &mark[i]);
    }
    printf("The average value is : %d", getavg(mark, n));
}