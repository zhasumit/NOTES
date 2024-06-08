/*
Write a program to print the pattern in the following fashion
      1 
     1 1
    1 1 1
   1 1 1 1
  1 1 1 1 1  .......
and so on take the height of the pyramid via user input 
*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the height of the pyramid\n");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= num - i; j++)
        {
            printf(" ");
        }
        printf("");
        for (int j = 0; j <= i; j++)
        {
            printf("1 ");
        }
        printf("\n");
    }

    /*
Write a program to print the pattern in the following fashion
         1 
       2   3
      4  5  6
    7  8  9  10
  11 12 13 14 15  .......
and so on take the height of the pyramid via user input 
*/
    printf("Enter the height of the pyramid\n");
    scanf("%d", &num);
    int a = 1;
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= num - i; j++)
        {
            printf(" ");
        }
        printf("");
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}