#include <stdio.h>
int main()
{
    int grades;

    printf("Enter the grades of the student \n");
    scanf("%d", &grades);

    if (grades >= 90)
    {
        printf("Grade A+");
    }
    else if (grades < 90 && grades >= 80)
    {
        printf("Grade A");
    }
    else if (grades < 80 && grades >= 70)
    {
        printf("Grade B");
    }
    else if (grades < 70 && grades >= 60)
    {
        printf("Grade C");
    }
    else if (grades < 60 && grades >= 50)
    {
        printf("Grade D");
    }
    else if (grades < 50 && grades >= 40)
    {
        printf("Grade E");
    }
    else if (grades < 40 && grades >= 0)
    {
        printf("Grade F");
    }
    else
    {
        printf("error");
    }

    printf("\n\n");

    // Not equal to operator
    int age;
    printf("Enter your age ");
    scanf("%i", &age);
    if (age != 18)
    {
        printf("You are not eligible for this job ");
    }
    else
    {
        printf("You are eligible for this job ");
    }

    printf("\n\n");

    // or operator
    int card;
    printf("Enter the card that you got");
    scanf("%d", &card);
    if (card == 100 || card == 50)
    {
        printf("Jackpot");
    }
    else
    {
        printf("No jackpot ");
    }

    // Not operator
    int find_it;
    printf("Enter the number which is not even");
    scanf("%d", &find_it);
    if (find_it % 2 == 0)
    {
        printf("The number is even ");
    }
    else if (!(find_it % 2 == 0))
    {
        printf("the number is not even");
    }
    else
    {
        printf("The number is not valid");
    }
    return 0;
}