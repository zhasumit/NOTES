/*P4 .10 Program to understand the type conversion in assignment */
#include <stdio.h>

int main()
{
    char c1, c2;
    int i1, i2;
    float f1, f2;

    c1 = ' H';
    i1 = 80.56;
    f1 = 12.6;
    c2 = i1; // char is concverted into int
    i2 = f1; // float is concverted into int

    // now c2 has character with ASCII value 80 i2 is assigned value of 12
    printf("c2 : %c & i2 : %d \n", c2, i2);
    f2 = i1;
    i2 = c1;

    /*Now i2  contains the Ascii value of character 'H' which is 72 */
    printf("f2 : %.2f & i2 : %d\n", f2, i2);
    return 0;
}