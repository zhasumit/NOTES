#include <stdio.h>
int fun() // int is the data type that is returning value that the functions spits out
{
    printf("Inside functions"); // body of functions that are to be used multiple times
    return 5;
}

int check_even(int x)
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

int main()
{
    fun();
    check_even(15);
    // inputs of the functions are called arguments here are no arguments in the function while calling
    /*Generally speaking, the terms parameter and argument are used interchangeably to mean information that is passed 
    into a function.A parameter is the variable listed inside the parentheses in the function definition.An argument is 
    the value that is sent to the function when it is called.*/
}

// any function declared after main function is not declared for the compiler and hence is not executed

// Functions are  block of statements that are to be executed many times and you call the functions by their name
// Same as functions in maths f(x)=something C functions also have some parameters written in brackets
// return_type Function's_name(Parameters){Block to be executed }
// Return type is the data type that the function is going to return and void represents no data type be returned