/*
Requirement:
    To write a C program to rearrange an array so that all
    negative numbers appear before positive numbers while
    preserving their original order.

Design (Algorithm):
    1. Start the program.
    2. Get the size and elements of the array from the user.
    3. Create a temporary array to store the rearranged elements.
    4. First, copy all negative numbers into the temporary array.
    5. Next, copy all positive numbers and zeros into it.
    6. Copy the temporary array back to the original array.
    7. Display the rearranged array.
    8. Stop the program.

Output:
    Enter the size of the array: 6
    Enter the array elements: 4 -2 0 -5 3 -1
    Rearranged array: -2 -5 -1 4 0 3
*/

#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, j = 0;

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

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    printf("Rearranged array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}