#include <stdio.h>
#include <string.h>
int main()
{
    // strcpy command
    //copy one string onto the another string
    char string[] = "Just_for_check", string_1[20], string_2[20], string_3[20];
    strcpy(string_2, string);
    // so the first string is assigned the value of second string
    printf("The copied value of string : %s\n", string_2);

    // strcat
    //concatenate one string onto the another string
    char name[] = "Sumit";
    char surname[] = "_jha";
    strcat(name, surname);
    printf("concatinated string : %s\n", name);

    // strlen
    // checking the length of the string
    printf("ENter the string to check its length : \n");
    scanf("%s", string_1);
    printf("The length of the string is %d", strlen(string_1));
}