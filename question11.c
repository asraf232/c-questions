/*
   Requirement:
               To convert an integer into a string of characters.

   Design (Algorithm):
                     1. Get an integer from the user.
                     2. Check whether the number is negative.
                     3. Extract each digit using the modulus (%)
                        operator and convert it into a character.
                     4. Store the digits in a character array.
                     5. Reverse the digits to get the correct order.
                     6. Add the null character at the end and
                        display the resulting string.

   Output:
           Enter an integer: -1234
           String value = -1234
*/

#include <stdio.h>

int main()
{
    int num, i = 0, j;
    char str[20], temp;
    int negative = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        negative = 1;
        num = -num;
    }

    do
    {
        str[i++] = (num % 10) + '0';
        num = num / 10;
    } while (num > 0);

    if (negative)
    {
        str[i++] = '-';
    }

    str[i] = '\0';

    for (j = 0; j < i / 2; j++)
    {
        temp = str[j];
        str[j] = str[i - j - 1];
        str[i - j - 1] = temp;
    }

    printf("String value = %s", str);

    return 0;
}