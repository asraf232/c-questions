/*
   Requirement:
               To check whether a given integer is a prime number
               or not.

   Design (Algorithm):
                     1. Get an integer from the user.
                     2. If the number is less than 2, print that
                        it is not a prime number.
                     3. Otherwise, use a "for" loop to check
                        whether the number is divisible by any
                        number from 2 to num - 1.
                     4. If it is divisible, print that the number
                        is not prime.
                     5. Otherwise, print that the number is prime.

   Output 1:
           Enter a number: 5
           The number is prime.

   Output 2:
           Enter a number: 6
           The number is not prime.
*/

#include <stdio.h>

int main()
{
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2)
    {
        flag = 1;
    }
    else
    {
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
    {
        printf("The number is prime.");
    }
    else
    {
        printf("The number is not prime.");
    }

    return 0;
}