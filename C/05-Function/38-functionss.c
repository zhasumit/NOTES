#include <stdio.h>

int check_even(int x); // function declaration
// if functions are defined before main function so wwe need not declare the function

int main()
{
    check_even(5);
}

/* here function check-even is after main so we need to declare it somewhere so that it would run w/o any warning and 
compiler would know that there would be some function named such and such with the specified arguments*/

int check_even(int x) // function body
{
    printf("Enter the value of x \n");
    scanf("%d", &x);
    int rem = x % 2;
    if (rem == 0)
        printf("EVEN");
    else
        printf("ODD");
    return rem;
}