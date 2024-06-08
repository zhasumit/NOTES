// Calculate the area of the circle and modify the same program to calculate the volume of the cylinder given its radius and height
#include <stdio.h>
int main()
{
    float PI = 3.1415;
    int rad_O = 3;
    int rad_cy = 6;
    int height_cy = 13;
    printf("The area of the circle is %f", PI * rad_O * rad_O);
    printf("The Volume of the Cylinder is %f", PI * rad_cy * rad_cy * height_cy);
    return 0;
}