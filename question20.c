/*
Requirement:
    To write a C program to swap n consecutive bits between
    two integers starting from a given bit position.

Design (Algorithm):
    1. Start the program.
    2. Get two integers, a starting bit position, and the
       number of bits to swap from the user.
    3. Create a mask containing n number of 1s.
    4. Extract the n bits from both numbers using right shift
       and bitwise AND operators.
    5. Find the difference between the extracted bits using
       the XOR operator.
    6. Shift the difference to the given bit position.
    7. Toggle the corresponding bits in both numbers using
       the XOR operator.
    8. Display both numbers after swapping the bits.
    9. Stop the program.

Output:
    Enter the first number: 10
    Enter the second number: 12
    Enter starting bit position: 1
    Enter number of bits to swap: 2
    First number after swapping: 12
    Second number after swapping: 10
*/

#include <stdio.h>

int main()
{
    unsigned int num1, num2, mask;
    unsigned int bits1, bits2, diff;
    int pos, n;

    printf("Enter the first number: ");
    scanf("%u", &num1);

    printf("Enter the second number: ");
    scanf("%u", &num2);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to swap: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    bits1 = (num1 >> pos) & mask;
    bits2 = (num2 >> pos) & mask;

    diff = bits1 ^ bits2;
    diff = diff << pos;

    num1 = num1 ^ diff;
    num2 = num2 ^ diff;

    printf("First number after swapping: %u\n", num1);
    printf("Second number after swapping: %u\n", num2);

    return 0;
}