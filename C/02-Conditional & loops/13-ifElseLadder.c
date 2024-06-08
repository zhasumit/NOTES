#include <stdio.h>
int main()
{
    // Find the day using the number of the day for week
    int day;
    printf("Enter the number of the day of the week ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("Day: Sunday\n");
    }
    else if (day == 2)
    {
        printf("Day: Monday\n");
    }
    else if (day == 3)
    {
        printf("Day: Tuesday\n");
    }
    else if (day == 4)
    {
        printf("Day: Wednesday\n");
    }
    else if (day == 5)
    {
        printf("Day: Thrusday\n");
    }
    else if (day == 6)
    {
        printf("Day: Friday\n");
    }
    else if (day == 7)
    {
        printf("Day: Saturday\n");
    }
    else
    {
        printf("Invaid entry \n");
    }

    int ans;
    printf("Would you like to do it for year?--- Write 1 for yes and 0 for no \n");
    scanf("%d", &ans);
    if (ans == 1)
    {
        printf("Enter the value of months number:\n");
        scanf("%d", &day);
        if (day == 1)
        {
            printf("Month: Sunday\n");
        }
        else if (day == 2)
        {
            printf("Month: February\n");
        }
        else if (day == 3)
        {
            printf("Month: March\n");
        }
        else if (day == 4)
        {
            printf("Month: April\n");
        }
        else if (day == 5)
        {
            printf("Month: May\n");
        }
        else if (day == 6)
        {
            printf("Month: June\n");
        }
        else if (day == 7)
        {
            printf("Month: July\n");
        }
        else if (day == 8)
        {
            printf("Month: August\n");
        }
        else if (day == 9)
        {
            printf("Month: September\n");
        }
        else if (day == 10)
        {
            printf("Month: October\n");
        }
        else if (day == 11)
        {
            printf("Month: November\n");
        }
        else if (day == 12)
        {
            printf("Month: December\n");
        }
        else
        {
            printf("Invaid entry \n");
        }
    }
    else
    {
        printf("Thank you :)\n");
    }
    return 0;
}