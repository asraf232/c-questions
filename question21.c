/*
Requirement:
    To write a C program to extract n bits from an integer
    starting from a given bit position.

Design (Algorithm):
    1. Start the program.
    2. Get an integer, starting bit position, and number
       of bits to extract from the user.
    3. Right-shift the number by the starting position.
    4. Create a mask containing n number of 1s.
    5. Use the bitwise AND (&) operator to extract the
       required bits.
    6. Display the extracted value.
    7. Stop the program.

Output:
    Enter an integer: 10
    Enter starting bit position: 1
    Enter number of bits to extract: 3
    Extracted value: 5
*/

#include <stdio.h>

int main()
{
    unsigned int num, mask, result;
    int pos, n;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to extract: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;
    result = (num >> pos) & mask;

    printf("Extracted value: %u\n", result);

    return 0;
}