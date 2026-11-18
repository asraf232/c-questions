/*
   Requirement:
               To check whether a given integer is even or odd.

   Design (Algorithm):
                     1. Get an integer from the user.
                     2. Use the modulus (%) operator to check
                        whether the number is divisible by 2.
                     3. If the remainder is 0, print the number
                        as even.
                     4. Otherwise, print the number as odd.

   Output 1:
           Enter a number: 10
           The number is even.

   Output 2:
           Enter a number: 7
           The number is odd.
*/

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("The number is even.");
    }
    else
    {
        printf("The number is odd.");
    }

    return 0;
}