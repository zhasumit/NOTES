#include <stdio.h>
int main()
{
    float marks1, marks2, marks3;
    printf("Enter the marks in three subjects : ");
    scanf("%f%f%f", &marks1, &marks2, &marks3);
    float percentage = (marks1 + marks2 + marks3) / 3;
    if ((percentage < 40) || marks1 < 33 || marks2 < 33 || marks3 < 33)
        printf("Percentage =%f \"FAIlED\"", percentage);
    else
        printf("Percentage =%f \"PASSED\"", percentage);
    return 0;
}