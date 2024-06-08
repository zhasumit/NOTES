// write a program to get the area of the rectangle [soft coded]
#include<stdio.h>
int main(){
    // initialisation of the length and breadth variables for the rectangle 
    int length,breadth;
    
    // take the length of the rectangle 
    printf("Enter the length of the rectangle : ");
    scanf("%d",&length);
    
    // take the breadth of the rectangle 
    printf("Enter the breadth of the rectangle : ");
    scanf("%d",&breadth);
    
    // calculate the area and assign it to a area variable 
    int area = length *breadth;

    // Display the area of the rectangle 
    printf ("Area of the rectangle is %d ", area);
    return 0;
}