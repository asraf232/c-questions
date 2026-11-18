/*
   Requirement:
               To calculate the factorial of a given positive integer.

   Design (Algorithm):
                     1. Get an integer from the user.
                     2. Initialize the variable "fact" to 1.
                     3. Use a "for" loop to multiply the numbers
                        from 1 to the given number.
                     4. Store the result in the variable "fact".
                     5. Print the factorial of the given number.

   Output:
           Enter a number: 5
           Factorial = 120
*/

#include <stdio.h>

int main()
{
    int num, i;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %llu", fact);

    return 0;
}