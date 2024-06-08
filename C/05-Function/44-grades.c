#include <stdio.h>
void fun()
{
    int marks;
    printf("Enter the marks for inquiry \n");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 91)
        printf("Grade : A+ \n");
    else if (marks <= 90 && marks >= 81)
        printf("Grade : A \n");
    else if (marks <= 80 && marks >= 71)
        printf("Grade : B \n");
    else if (marks <= 70 && marks >= 61)
        printf("Grade : C \n");
    else if (marks <= 60 && marks >= 51)
        printf("Grade : D \n");
    else if (marks <= 50 && marks >= 41)
        printf("Grade : E \n");
    else if (marks <= 40 && marks >= 0)
        printf("Grade : F \n");
    else
        printf("Wrong Input \n");
    int response;
    printf("WANT TO TRY AGAIN? \n");
    scanf("%d", &response);
    if (response == 1)
        fun();
    else
        printf("Thank you very much \n");
}
int main()
{
    fun();
    return 0;
}