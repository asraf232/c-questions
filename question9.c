/*
   Requirement:
               To find the GCD of two positive integers using
               a recursive function and the Euclidean algorithm.

   Design (Algorithm):
                     1. Get two positive integers from the user.
                     2. Pass the two numbers to the "gcd" function.
                     3. If the second number is 0, return the first
                        number as the GCD.
                     4. Otherwise, call the function again with
                        the second number and the remainder of
                        the first number divided by the second.
                     5. Display the GCD returned by the function.

   Output:
           Enter two numbers: 12 18
           GCD = 6
*/

#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD = %d", gcd(num1, num2));

    return 0;
}