// Write a program to convert the temperature from degree celsius to degree fahrenheit
#include <stdio.h>
int main()
{
    float cel = 42;
    float far = (cel * 9 / 5) + 32;
    printf("%f celcius is equivalent to \'%f\'farenheit", cel, far);
    return 0;
}