/*
Requirement:
    To write a C program to find all pairs of elements
    in an array whose sum is equal to a given target value.

Design (Algorithm):
    1. Start the program.
    2. Get the size and elements of the array from the user.
    3. Get the target sum from the user.
    4. Use two nested loops to check all possible pairs.
    5. If the sum of two elements equals the target,
       display the pair.
    6. Do not pair an element with itself.
    7. If no valid pair is found, display an appropriate message.
    8. Stop the program.

Output:
    Enter the size of the array: 5
    Enter the array elements: 2 4 3 5 7
    Enter the target sum: 7
    Pairs whose sum is 7:
    (2, 5)
    (4, 3)
*/

#include <stdio.h>

int main()
{
    int arr[100], n, target;
    int i, j, found = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    printf("Pairs whose sum is %d:\n", target);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pairs found.\n");
    }

    return 0;
}