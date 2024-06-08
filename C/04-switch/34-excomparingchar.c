// write  a program that you compare the first letter of your name and suggest your panel to you
#include <stdio.h>
int main()
{
    char name_first_letter;
    printf("ENter the first letter of your name \n");
    scanf("%c", &name_first_letter);
    // here the ASCII values of the characters are compared and the conditions are set accordingly
    if (name_first_letter >= 'A' && name_first_letter <= 'N')
        printf("PANEL 1 \n");

    else if (name_first_letter > 'N' && name_first_letter <= 'Z')
        printf("PANEL 2 \n");

    if (name_first_letter >= 'a' && name_first_letter <= 'n')
        printf("PANEL 1 \n");

    else if (name_first_letter > 'n' && name_first_letter <= 'z')
        printf("PANEL 2 \n");

    printf("The ASCII value of %c is %d", name_first_letter, name_first_letter);
}
/* character have a range of 0-255 and every number is assigned a number called ASCII value so the compiler 
compares the value of ASCII value and while comparing the value of integer type 

---------ASCII Values-----------
0 -> 48
A -> 65 
B -> 66
.
.
.
.
.
a -> 97
b -> 98
.
.
.
z -> 122 
so in c the values are stored in the form of ASCII value and the compiler prints the value as per the format 
specifiers if you print same character as %c and %d so these will print differenet values at the same time  


IF the users input capital number into the character type so the compiler would show all pf them panel A since it
would compare the ASCII value which is an integer and so seperate conditions are to be written in order to make
the compiler take ranges and choose the value to be printed as per the capita and small values              
*/