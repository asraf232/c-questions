/*
   Requirement:
               To convert a decimal number to any base between
               2 and 16 using functions.

   Design (Algorithm):
                     1. Get a decimal number and the target base
                        from the user.
                     2. Pass the number and base to a function.
                     3. Divide the number by the target base and
                        store the remainders in an array.
                     4. Repeat the process until the number
                        becomes zero.
                     5. Convert remainders from 10 to 15 into
                        letters A to F.
                     6. Print the remainders in reverse order
                        to get the converted number.

   Output:
           Enter a decimal number: 255
           Enter the base (2-16): 16
           Converted number = FF
*/

#include <stdio.h>

void convertBase(int num, int base)
{
    char result[32];
    int i = 0;

    if (num == 0)
    {
        printf("Converted number = 0");
        return;
    }

    while (num > 0)
    {
        int rem = num % base;

        if (rem < 10)
        {
            result[i] = rem + '0';
        }
        else
        {
            result[i] = rem - 10 + 'A';
        }

        i++;
        num = num / base;
    }

    printf("Converted number = ");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", result[j]);
    }
}

int main()
{
    int num, base;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Enter the base (2-16): ");
    scanf("%d", &base);

    if (num < 0 || base < 2 || base > 16)
    {
        printf("Invalid input.");
    }
    else
    {
        convertBase(num, base);
    }

    return 0;
}