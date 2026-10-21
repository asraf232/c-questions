/*
Requirement:
    To write a C program to replace n bits of the first
    number with n bits from the second number, starting
    from a given bit position.

Design (Algorithm):
    1. Start the program.
    2. Get two integers, a starting bit position, and
       the number of bits to replace.
    3. Create a mask containing n number of 1s.
    4. Clear n bits in the first number at the given
       position using bitwise AND and NOT operators.
    5. Extract n bits from the second number.
    6. Shift these bits to the given position.
    7. Combine both numbers using the bitwise OR operator.
    8. Display the final result.
    9. Stop the program.

Output:
    Enter the first number: 15
    Enter the second number: 2
    Enter starting bit position: 1
    Enter number of bits to replace: 2
    Result after replacing bits: 13
*/

#include <stdio.h>

int main()
{
    unsigned int num1, num2, mask, result;
    int pos, n;

    printf("Enter the first number: ");
    scanf("%u", &num1);

    printf("Enter the second number: ");
    scanf("%u", &num2);

    printf("Enter starting bit position: ");
    scanf("%d", &pos);

    printf("Enter number of bits to replace: ");
    scanf("%d", &n);

    mask = (1U << n) - 1;

    num1 = num1 & ~(mask << pos);

    num2 = (num2 & mask) << pos;

    result = num1 | num2;

    printf("Result after replacing bits: %u\n", result);

    return 0;
}