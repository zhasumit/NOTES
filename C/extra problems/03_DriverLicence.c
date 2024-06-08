#include <stdio.h>
int main()
{
    int age, VipPass;
    printf("Enter you age : ");
    scanf("%d", &age);
    printf("Do you have VIP pass ? ");
    scanf("%d", VipPass);
    if ((age < 70 && age > 17) || VipPass == 1)
        printf("You can \"DRIVE\"");
    else
        printf("You cannot drive");
    return 0;
}