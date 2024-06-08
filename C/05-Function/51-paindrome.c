// Palindrome number is a numberif read backward OR forward is the same eg:1221, racecar, etc
#include <stdio.h>
int main()
{
    int number, reverse = 0, palindrome, remainder;
    printf("Enter the value of a number to check if it is palindrome or not : \n");
    scanf("%d", &number);
    palindrome = number; // palindrome is jusr a temporary variable that is used to store the value of number entered
    while (number != 0)
    {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }
    printf("The reverse number : \"%d\"\n", reverse);
    if (reverse == palindrome)
        printf("The number is a \"palindrome number \"");
    else
        printf("The number is \"NOT\" a palindrome number");
    return 0;
}