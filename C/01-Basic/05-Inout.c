#include <stdio.h>
int main()
{
    int a;
    float b;
    char c;
    double d;
    printf("Enter the value of integer real character and double type \n");
    scanf("%d %f %c %lf", &a, &b, &c, &d);

    printf("The values that were called are as: \t %d\t %f\t %c\t %lf \n", a, b, c, d);

    // now the address and the value of the variables
    printf("ENter the value of integer real character and double type \n");
    scanf("%d %f %c %lf", &a, &b, &c, &d);

    printf("The Menory addresses of the variabes are: \t %d\t %f\t %c\t %lf \n", &a, &b, &c, &d);

    printf("The values that were called are as: \t %d\t %f\t %c\t %lf", a, b, c, d);
    return 0;
}