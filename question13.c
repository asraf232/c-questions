/*
   Requirement:
               To convert a string of digits into its equivalent
               integer value without using built-in conversion
               functions.

   Design (Algorithm):
                     1. Get a number as a string from the user.
                     2. Initialize the variable "num" to 0.
                     3. Use a "for" loop to read each character
                        in the string.
                     4. Convert each character into a digit by
                        subtracting '0'.
                     5. Multiply "num" by 10 and add the digit.
                     6. Print the final integer value.

   Output:
           Enter a number as a string: 1234
           Integer value = 1234
*/

#include <stdio.h>

int main()
{
    char str[20];
    int num = 0;

    printf("Enter a number as a string: ");
    scanf("%19s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        num = num * 10 + (str[i] - '0');
    }

    printf("Integer value = %d", num);

    return 0;
}