#include <stdio.h>
int main()
{
    // Like for the gender restrictions
    char gender;
    printf("Enter your gender ");
    scanf("%c", &gender);
    if (gender == 'm')
        printf("You're eligible to apply for the boys team \n");
    else
        printf("You're not eligible to apply for the boys team\n");

    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age > 18)
    {
        printf("You're eligible");
    }
    else
        printf("You're not eligible ");

    // similarly for age restrictions

    return 0;
}