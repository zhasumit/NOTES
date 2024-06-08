#include <stdio.h>
/*
Print multiplication table of a number entered by the user in pretty form
Example:
Input
Enter the number you want multiplication table of:
6
Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60
*/
int main()
{
    int a;
    printf("Enter the number you want the multiplication table of : ");
    scanf("%d", &a);
    printf("%d X %d = %d\n", a, 1, a * 1);
    printf("%d X %d = %d\n", a, 2, a * 2);
    printf("%d X %d = %d\n", a, 3, a * 3);
    printf("%d X %d = %d\n", a, 4, a * 4);
    printf("%d X %d = %d\n", a, 5, a * 5);
    printf("%d X %d = %d\n", a, 6, a * 6);
    printf("%d X %d = %d\n", a, 7, a * 7);
    printf("%d X %d = %d\n", a, 8, a * 8);
    printf("%d X %d = %d\n", a, 9, a * 9);
    printf("%d X %d = %d\n", a, 10, a * 10);

    // other way of doing the same thing via loop
    printf("Enter the value of the number you want multiplication table of: ");
    scanf("%d", &a);
    int count;
    printf("Enter the count of number of multiples: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
        printf("%d X %d = %d\n", a, i, a * i);
    return 0;
}
