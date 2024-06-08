#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union result
{
    char name[20];
    char grades[2];
    float percentage;
};
int main()
{
    union result Roll1;
    Roll1.percentage = 96.321;
    printf("%f", Roll1.percentage);
}