#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf("%d\n", i);
        i += 5;
    } while (i < 26);

    // Difference between while and do while loop
    do
    {
        printf("%d\n", i); // Here the value of i is 30 form the updation of first loop
        i += 5;
    } while (i < 26);
    // So, here the value of i is 30 from line 9 and hence the first loop was not executed
    // but in the second loop, first the loop 2 is executed, and then the condition was checked, and since the condition didnt match for the second loop the loop got terminted
    // So, Basically do while loop is exit controlled loop whereas the while loop is the entry controlled loop
    // Also, in the while loop first condn is checked and then the block is executed
    // But in the do while loop at least once the block is executed and then the condn is checked
}