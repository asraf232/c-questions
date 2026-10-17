/*
   Requirement:
               To check whether a given number is a Perfect Number
               using a separate function.

   Design (Algorithm):
                     1. Get a positive integer from the user.
                     2. Pass the number to a function named
                        "isPerfect".
                     3. Use a "for" loop to find the proper divisors
                        of the number and calculate their sum.
                     4. If the sum equals the original number,
                        return 1; otherwise, return 0.
                     5. Display whether the number is perfect
                        or not.

   Output:
           Enter a number: 6
           The number is a Perfect Number.
*/

#include <stdio.h>

int isPerfect(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPerfect(num))
    {
        printf("The number is a Perfect Number.");
    }
    else
    {
        printf("The number is not a Perfect Number.");
    }

    return 0;
}