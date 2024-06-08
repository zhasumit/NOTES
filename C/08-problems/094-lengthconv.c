#include <stdio.h>
int main()
{
    float km, meter, cm, feet, inches;
    printf("Enter the value of length in kilo meters: ");
    scanf("%f", &km);
    meter = 1000 * km;
    cm = 100000 * km;
    feet = 3280 * km;
    inches = 39370 * km;
    printf("The value of length in meters:\t %f meters\n", meter);
    printf("The value of length in centi-meters:\t %f cm\n", cm);
    printf("The value of length in feet:\t %f feet\n", feet);
    printf("The value of length in inches:\t %f inches\n", inches);
    return 0;
}