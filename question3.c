/*
   Requirement:
               To print a pyramid of stars for a given number n.

   Design (Algorithm):
                     1. Get the value of n from the user.
                     2. Use a "for" loop to print each row.
                     3. Use another "for" loop to print spaces
                        and stars in each row.
                     4. Move to the next line after printing
                        each row.

   Output:
           Enter the number: 5
               *
              ***
             *****
            *******
           *********
*/

#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}