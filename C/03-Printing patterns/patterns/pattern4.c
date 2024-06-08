/*
Wrrite a program to print the patterns in the following fashion
          *
        * *
      * * *  
    * * * * 
  * * * * * 
* * * * * *  
.... and so on 
*/
#include <stdio.h>
int main()
{
  int count;
  printf("Enter the height of the pyramid: \n");
  scanf("%d", &count);
  for (int i = 1; i <= count; i++)
  {
    for (int j = 1; j <= count; j++)
    {
      if (i + j <= count)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
  return 0;
}