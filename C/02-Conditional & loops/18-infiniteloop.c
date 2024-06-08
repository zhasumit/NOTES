#include <stdio.h>
int main()
{
    for (int i = 1; i < 0; i++)
    {
        printf("This is an infinite loop\n");
    }
    //here since the valueof i never gets less than zero so the conditional statement doesnt false and it is stuck in the for loop forever and is known as infinite loop

    // loop 2
    for (;;)
    {
        printf("\" infinite loop\"\n");
    }
    //here since theere is no conditional statement so compiler gets into theloop at time of execution but since there is no updation or condition so the loop continues in the cycle and doesnt terminate
}