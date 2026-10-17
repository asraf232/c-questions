/*
   Requirement:
               To count the frequency of each digit (0-9) in a given
               integer using a separate function and an array.

   Design (Algorithm):
                     1. Get an integer from the user.
                     2. Initialize an array to store the frequency
                        of each digit from 0 to 9.
                     3. Pass the number and frequency array to
                        a function.
                     4. Use a loop to extract each digit using
                        the modulus (%) operator.
                     5. Increase the frequency of each digit
                        in the array.
                     6. Print the frequency of each digit.

   Output:
           Enter a number: 122345
           Digit 1 = 1
           Digit 2 = 2
           Digit 3 = 1
           Digit 4 = 1
           Digit 5 = 1
*/

#include <stdio.h>

void countFrequency(int num, int freq[])
{
    if (num == 0)
    {
        freq[0] = 1;
        return;
    }

    while (num > 0)
    {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
}

int main()
{
    int num;
    int freq[10] = {0};

    printf("Enter a number: ");
    scanf("%d", &num);

    countFrequency(num, freq);

    for (int i = 0; i < 10; i++)
    {
        if (freq[i] > 0)
        {
            printf("Digit %d = %d\n", i, freq[i]);
        }
    }

    return 0;
}