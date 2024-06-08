#include<stdio.h>
int main()
{
    int hr, min, sec;
    printf("Enter the value of hours \n");
    scanf("%d",hr);
    printf("Enter the value of minutes \n");
    scanf("%d",min);
    printf("Enter the value of seconds \n");
    scanf("%d",sec);
    float seconds = ((hr*60*60) + (min*60) + sec);
    printf("The time in seconds is %f",seconds);
    printf("The time in MINUTES is %f",seconds/60);
    return 0;
}