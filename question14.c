/*
   Requirement:
               To check whether a given string is a pangram or not.

   Design (Algorithm):
                     1. Get a sentence from the user.
                     2. Initialize an array to store the presence
                        of all 26 letters of the alphabet.
                     3. Use a loop to check each character in
                        the string.
                     4. Convert uppercase letters into lowercase
                        and mark the corresponding alphabet.
                     5. Check whether all 26 letters are present.
                     6. If all letters are present, print that
                        the string is a pangram; otherwise, print
                        that it is not a pangram.

   Output:
           Enter a sentence: The quick brown fox jumps over the lazy dog
           The string is a pangram.
*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[200];
    int alphabet[26] = {0};
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        char ch = tolower((unsigned char)str[i]);

        if (ch >= 'a' && ch <= 'z')
        {
            if (alphabet[ch - 'a'] == 0)
            {
                alphabet[ch - 'a'] = 1;
                count++;
            }
        }
    }

    if (count == 26)
    {
        printf("The string is a pangram.");
    }
    else
    {
        printf("The string is not a pangram.");
    }

    return 0;
}