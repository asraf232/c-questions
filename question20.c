/*
Requirement:
    To write a C program to toggle n consecutive bits
    of an integer starting from a given bit position.

Design (Algorithm):
    1. Start the program.
    2. Get an integer, starting bit position, and number
       of bits to toggle from the user.
    3. Create a mask by shifting 1 to the starting position.
    4. Use a loop to toggle n consecutive bits.
    5. Use the XOR (^) operator to toggle each bit.
    6. Display the modified number.
    7. Stop the program.

Output:
    Enter an integer: 10
    Enter starting bit position: 1
    Enter number of bits to toggle: 3
    Number after toggling bits: 4
*/

#include <stdio.h>

int main()
{
    unsigned int num, mask;
    int pos, n, i;

    printf("Enter an integer: ");
    scanf("%u", &num);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to toggle: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        mask = 1U << (pos + i);
        num = num ^ mask;
    }

    printf("Number after toggling bits: %u\n", num);

    return 0;
}