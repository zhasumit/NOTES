#include <stdio.h>
int main()
{
    printf("\n\nWent to the doctor for checkUp");
    int day, time, count = 0;
    for (day = 1; day <= 5; day++)
    {
        printf("\n\nGood day");
        for (time = 0; time <= day; time++)
        {
            printf("\nDay no. = %d and Medicine no. = %d", day, time);
            count++;
        }
        printf("\nGood night..\n");
    }
    printf("\n\nWent to the doctor to report him...");
    printf("\nAfter existing loop day=%d and medicine = %d...", day, time);
    printf("\nMedicine count = %d...", count);
    printf("\n\nEnd of program");
    return 0;
}