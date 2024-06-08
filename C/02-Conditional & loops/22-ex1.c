#include <stdio.h>
int main()
{
    int i = 1;             // here i is dymanically assigned to 1
    printf("%d\n", i = 3); // here the value of i is assigned to 3
    if (i = 2)
    {
        printf("Hello world \n");
    }
    printf("%d\n", i);
    /*----------------Explanation---------------
    Here = means assignment operator and == means comparator so actually the value of i is assigned to 2 in the place of compairing it hence the execution enters the if statement */
    if (i = 0)
    {
        printf("Hello world \n");
    }
    printf("%d\n", i);
    /*Here the value of i is assigned to 0
    In C programming language there is no true and false statement there is 1 for True and 0 for False
    As so as soon as you equate something to 0 at the time of giving condition the block regaurding that condition is skipped*/
    if (i = 15)
    {
        printf("Hello world \n");
    }
    printf("%d\n", i);
    /*NOTE: ANY number other than 0 gives 1 value for the condition and the block gets executed */
    return 0;
}