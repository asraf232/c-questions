/*
   Requirement:
               To generate the Fibonacci series up to a given
               number of terms.

   Design (Algorithm):
                     1. Get the number of terms from the user.
                     2. Initialize the variables "first" to 0
                        and "second" to 1.
                     3. Use a "for" loop to print the Fibonacci
                        series up to the given number of terms.
                     4. Add the first and second numbers to get
                        the next number.
                     5. Update the variables for the next iteration.

   Output:
           Enter the number of terms: 7
           Fibonacci series: 0 1 1 2 3 5 8
*/

#include <stdio.h>

int main()
{
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}