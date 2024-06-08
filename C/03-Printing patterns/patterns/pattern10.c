/*Write a program to print a pattern in the following fashion 
the number of rows must be of desired length of the user 
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
#include <stdio.h>
int main()
{
    int space, count;
    printf("Enter the height of the pyramid");
    scanf("%d", &count);
    for (int i = 0; i <= count; i++)
    {
        for (space = 0; space <= count - i; space++)
            printf(" ");
        for (int j = 1; j <= (2 * i - 1); j++)
            printf("*");
        {
            /* code */
        }
        printf("\n");
    }
    for (int i = count - 1; i >= 1; i--)
    {
        for (space = 0; space <= (count - i); space++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }
}
