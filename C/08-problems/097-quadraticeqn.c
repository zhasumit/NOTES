// Write a program to find the value of roots of quadratic equation
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, D, root_1, root_2, same_root;
    printf("ENter the value of a, b and c in the \nQuadratic equation's form ax^2+bx+c\n");
    scanf("%f %f %f", &a, &b, &c);
    D = ((b * b) - (4 * a * c));
    root_1 = (-b + sqrt(D)) / 2 * a;
    root_2 = (-b - sqrt(D)) / 2 * a;
    same_root = -b / 2 * a;
    if (D > 0)
    {
        printf("Roots are real and distinct: ");
        printf("Root 1: %f ", root_1);
        printf("Root 2: %f ", root_2);
    }
    if (D == 0)
    {
        printf("Roots are equal: %f ", same_root);
    }

    if (D < 0)
    {
        printf("Roots are not real\"IMAGINARY ROOTS\"");
    }
    return 0;
}