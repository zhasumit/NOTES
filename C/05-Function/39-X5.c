#include <stdio.h>
int checkit(int a)
{
    int user_input;
    printf("Enter the value to be tested for the multiple of 5 ");
    scanf("%d", &user_input);
    if (user_input % 5 == 0)
        return 1;
    // return is like a break statement of the function so it breaks and moves on to main function on returning any value
    // return is executed only once
    return 0; // for the int return type it is default as zero i.e. return 0;
}
int main()
{
    int ans = checkit(1);
    if (ans == 1)
        printf("Yes: A multiple of five ");
    else
        printf("NO: Not a multiple of five ");
}