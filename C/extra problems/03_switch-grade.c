#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the grades of the student");
    scanf("%d", &marks);
    int grade = (marks / 10);
    switch (grade)
    {
    case 10:
    case 9:
        printf("Grade \"A\"");
        break;
    case 8:
        printf("Grade \"B\"");
        break;
    case 7:
        printf("Grade \"C\"");
        break;
    case 6:
        printf("Grade \"D\"");
        break;
    case 5:
        printf("Grade \"E\"");
        break;
    default:
        printf("Grade \"F\"");
        break;
    }

    return 0;
}