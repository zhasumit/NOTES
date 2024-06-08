#include <stdio.h>
int main()
{
    printf("This program is meant to introduce the concept of ASCII representation of characters \n");
    printf("HELLO JI\nThe same could represented in Ascii as : \n%d%d%d%d%d %d%d\n", 'H', 'E', 'L', 'L', 'O', 'J', 'I');
    // Printing the Ascii values of the characters
    char ch = 'A';
    char CH = 'a';
    for (int i = 0; i < 26; i++)
        printf("%c : %d & %c : %d\n", ch + i, ch + i, CH + i, CH + i);
    printf("The ASCII value ranges from : 1-255\n");
    for (int i = 0; i < 255; i++)
        printf("%d : \"%c\"\n", 1 + i, 1 + i);
    //so characters are the Ascii values that are stored in the integer form in the program
    return 0;
}