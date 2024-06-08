#include <stdio.h>
#include <string.h>
int main()
{
    // declaration of a string
    char name[10] = {'S', 'u', 'm', 'i', 't', '\0'}; // first method of declaration of string
    char NAME[10] = "Sumit";                         // second method of declaration of string
    printf("String 1 : %s\n", name);
    printf("String 2 : %s\n", NAME);

    // while scanning the string we can do it either the string way or in direct way
    printf("Enter you name in the manner you enter for the arrays for character : \n");
    for (int i = 0; i < 10; i++)
        scanf("%c", &name[i]);
    // the general manner
    printf("Your name : %s ", name);
    printf("Enter your name : \n");
    scanf("%s", NAME); // notice here we dont use the ampersand sign(&)
    printf("Your name : %s \n", NAME);
    return 0;
};