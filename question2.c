/*
   Requirement:
               To set bit 2, clear bit 5, and toggle bit 0 of an 8-bit register
               using bitwise operators only.

   Design (Algorithm):
                     1. Initialize an unsigned char variable "reg"
                        with the value 10.
                     2. Use the OR ("|") operator to set bit 2.
                     3. Use the AND ("&") and NOT ("~") operators
                        to clear bit 5.
                     4. Use the XOR ("^") operator to toggle bit 0.

   Output:
           15.
*/

#include <stdio.h>

unsigned char modifyRegister(unsigned char reg)
{
    reg = reg | (1 << 2);     // Set bit 2
    reg = reg & ~(1 << 5);    // Clear bit 5
    reg = reg ^ (1 << 0);     // Toggle bit 0

    return reg;
}

int main()
{
    unsigned char reg = 10;

    reg = modifyRegister(reg);

    printf("Modified register = %d", reg);

    return 0;
}
