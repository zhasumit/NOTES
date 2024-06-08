#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct details
{
    char name[20];
    long long int phno;
};
struct result
{
    char grades[2];
    float marks;
    float percent;
};
int main()
{
    struct details person1 = {"Rahul", 9816744999};
    struct details person2 = {"Raj", 9862667710};
    struct result studnt1 = {'A', 87.23, 88.52};
    // the user input ways
    printf("ENter the grades of the student ");
    scanf("%c", &studnt1.grades);
    printf("ENter the marks of the student ");
    scanf("%f", &studnt1.marks);
    printf("ENter the percentage of the student ");
    scanf("%f", &studnt1.percent);
    printf("%lld \n", person1.phno);
    printf("%lld \n", person2.phno);
}
