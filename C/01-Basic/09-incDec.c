#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of any number ");
    scanf("%d", &a);
    printf("Line 7 a: %d\n", a);
    printf("Line 8 Prefix of i.e. ++a : %d\n", ++a);
    printf("Line 9 a: %d\n", a);
    printf("Line 10 Postfix of a i.e. a++: %d\n", a++);
    printf("Line 11 a: %d\n", a);
    printf("Line 12 Prefix of i.e. --a : %d\n", --a);
    printf("Line 13 a: %d\n", a);
    printf("Line 14 Postfix of a i.e. a--: %d\n", a--);
    printf("Line 15 a: %d\n", a);
    return 0;
}

// In postfix the value of the variable gets increased or decreased in the next line whereas in the prefix the value of vavriables get increased and decreased in the same line