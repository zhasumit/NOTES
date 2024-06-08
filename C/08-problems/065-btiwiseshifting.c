#include <stdio.h>
int main()
{
    int num = 5;
    printf("---------------------------------\n");
    // left shift (a<<5): 00000000000000000000000000000101 --> 00000000000000000000000001010000 (80) in decimal
    printf("The number : %d \nLeft shifted four times : %d \n", num, num << 4);
    printf("---------------------------------\n");
    num = 55;
    // Right shift (a<<5): 00000000000000000000000000110111 --> 00000000000000000000000000000011 (3) in decimal
    printf("The number : %d \nRight shifted four times : %d \n", num, num >> 4);
    printf("---------------------------------\n");
    return 0;
    // the bitwise left >> operator make the shift towards the left by adding the 0s as the new bits in right
    // Similarly the bitwise right << operator make number shift right by adding the 0s as the new bits in left

    // As many times you shift the number left that many times you are nultiplying 2 or in other words 2^shifting_num
    // and as many times you shift the number right that many times you are dividing 2 or in other words 2^shifting_num
}