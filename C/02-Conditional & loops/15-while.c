#include <stdio.h>
int main()
{
    int i = 0;
    while (i < 26)
    {
        printf("%d\n", i);
        i += 5;
    }
    // example of empty statement
    int j = 0;
    while (j < 26)
        ;
    {
        /* code */
    }
    // Here since the statement doesnt have any updations so the loop has nothing so that it terminates in the while and the loop is stuck into the while loop
    return 0;
}