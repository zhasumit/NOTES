#include <stdio.h>
int main()
{
    for (short i = 1; i != 0; i++)
    {
        printf("%d\n", i);
    }
    printf("This Ends ");
    return 0;

    /*Signed short int
    1 2 3 4 5 ......32767 (Data type maximum value) -32768 -32767 ....... -5 -4 -3 -2 -1 0 (Data type minimum value)
    unsigned short int
    1 2 3 4 5 ......32767 (Data type maximum value) Since no negative value so-> 0 (Data type minimum value)*/
}