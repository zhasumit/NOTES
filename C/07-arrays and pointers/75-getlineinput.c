#include <stdio.h>
#include <string.h>
int main()
{
    char string_3[50];
    printf("Enter any line : \n");
    //[^\n] tells the compiler to avoid the spaces
    //and only terminate the input taking at a newline i.e. ENTER button
    scanf("%[^\n]s", &string_3);
    printf("%s \n", string_3);
}