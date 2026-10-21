/*
Requirement:
    To write a C program to convert all uppercase letters
    in a string into lowercase letters.

Design (Algorithm):
    1. Start the program.
    2. Get a string from the user.
    3. Use a loop to check each character in the string.
    4. If the character is an uppercase letter (A to Z),
       add 32 to convert it into lowercase.
    5. Leave lowercase letters, numbers, and special
       characters unchanged.
    6. Display the modified string.
    7. Stop the program.

Output:
    Enter a string: HELLO World 123!
    Lowercase string: hello world 123!
*/

#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase string: %s", str);

    return 0;
}