#include <stdio.h>
int main()
{
    int grades;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter your grades: grades must not be zero\n");
        scanf("%d", &grades);
        printf("This is the grades that you entered: %d\n", grades);
        if (grades == 0)
            break; // break lets the control come out of the loop immediately as the condition in the if statement comes true and if the condition doesnt come true then the loop iterates as per the main condition inthe loop
    }
    printf("Here came the controls"); // controls came out of the loop just here

    // break only applies to the loop that it is appi0ed to
    // just in case break is applied to inner loop if condition matches the inner loop is only exited it will still be there in the nested loop

    // breaking innner loop
    for (int i = 0; i < 5; i++)
    {
        printf("Enter your grades: \n");
        for (int j = 0; j < 5; j++)
        {
            printf("Enter your grades : \n");
            scanf("%d", &grades);
            if (grades < 40)
                break;
            printf("Your grades is : %d", grades); // this would not work if grades are less than 40
        }
        if (grades < 40)
        {
            printf("You've failed the test :(");
        }
    }

    // breaking outer loop
    for (int i = 0; i < 5; i++)
    {
        int a = 0;
        for (int j = 1; j <= 5; j++)
        {
            printf("j =%d \n", j);
        }
        printf("--------i = %d \n", i);
        if (i == 2)
            break;
    }
    printf("The outer loop would break at i = 2");
    return 0;
}