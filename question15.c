/*
   Requirement:
               To check whether a given string is a palindrome
               or not.

   Design (Algorithm):
                     1. Get a string from the user.
                     2. Find the length of the string.
                     3. Compare the first and last characters
                        of the string.
                     4. Use a loop to compare the characters
                        from both ends.
                     5. If all characters match, print that
                        the string is a palindrome.
                     6. Otherwise, print that the string is
                        not a palindrome.

   Output:
           Enter a string: madam
           The string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("The string is a palindrome.");
    }
    else
    {
        printf("The string is not a palindrome.");
    }

    return 0;
}