/*
Requirement:
    To write a C program to remove duplicate elements
    from a given array and display only unique elements.

Design (Algorithm):
    1. Start the program.
    2. Get the size and elements of the array from the user.
    3. Use two loops to compare the array elements.
    4. If duplicate elements are found, shift the remaining
       elements one position to the left.
    5. Decrease the array size after removing a duplicate.
    6. Repeat the process until all duplicates are removed.
    7. Display the array containing unique elements.
    8. Stop the program.

Output:
    Enter the size of the array: 6
    Enter the array elements: 10 20 10 30 20 40
    Array after removing duplicates: 10 20 30 40
*/

#include <stdio.h>

int main()
{
    int arr[100], n, i, j, k;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}