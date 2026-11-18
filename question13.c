/*
   Requirement:
               To reverse the characters of a given string
               using an iterative approach.

   Design (Algorithm):
                     1. Get a string from the user.
                     2. Find the length of the string.
                     3. Use a loop to swap the first and last
                        characters of the string.
                     4. Continue swapping the characters until
                        the middle of the string is reached.
                     5. Print the reversed string.

   Output:
           Enter a string: hello
           Reversed string = olleh
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], temp;
    int i, len;

    printf("Enter a string: ");
    scanf("%99s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }

    printf("Reversed string = %s", str);

    return 0;
}