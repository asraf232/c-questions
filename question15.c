/*
   Requirement:
               To replace multiple consecutive spaces in a string
               with a single space.

   Design (Algorithm):
                     1. Get a sentence from the user.
                     2. Use a loop to read each character in the string.
                     3. Check whether the current character is a space.
                     4. If it is a space, add only one space to the
                        result and skip the remaining consecutive spaces.
                     5. Copy the characters into the string without
                        extra spaces.
                     6. Print the cleaned string.

   Output:
           Enter a sentence: Hello    world   welcome
           Cleaned string: Hello world welcome
*/

#include <stdio.h>

int main()
{
    char str[200];
    int i, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' || (j > 0 && str[j - 1] != ' '))
        {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("Cleaned string: %s", str);

    return 0;
}