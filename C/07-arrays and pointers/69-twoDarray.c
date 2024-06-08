#include <stdio.h>
int main()
{
    int rows, coloums, i, j;
    printf("ENter the number of rows : ");
    scanf("%d", &rows);
    printf("ENter the number of coloums : ");
    scanf("%d", &coloums);
    int array[rows][coloums];
    for (i = 0; i < rows; i++)
        for (j = 0; j < coloums; j++)
            scanf("%d", &array[i][j]);
    printf("The elements of arrays are : \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < coloums; j++)
        {
            printf("%d \t", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}