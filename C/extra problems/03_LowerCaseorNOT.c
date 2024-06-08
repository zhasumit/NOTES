#include <stdio.h>
int main()
{
    char num;
    printf("Enter a character : ");
    scanf("%c", &num);
    if (num >= 97 && num <= 122)
        printf("the character is a LOWER case letter ");

    if (num >= 65 && num <= 90)
        printf("the character is a UPPER case letter ");
    return 0;
}