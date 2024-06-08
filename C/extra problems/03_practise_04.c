//leap year
#include <stdio.h>
int main()
{
    int yr;
    printf("Enter the year you wanna check for leap year: ");
    scanf("%d", &yr);
    if ((yr % 4 == 0) && (yr % 100 == 0) || (yr % 400 == 0))
    {
        printf("\"LEAP year\"");
    }
    else
        printf("\"NOT a leap year\"");
    return 0;
}