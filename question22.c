/*
Requirement:
    To write a C program to find the second largest and
    second smallest elements in an array without sorting.

Design (Algorithm):
    1. Start the program.
    2. Get the size and elements of the array from the user.
    3. Initialize the largest and smallest values using
       the first element.
    4. Find the largest and smallest elements in the array.
    5. Find the second largest and second smallest distinct
       elements without sorting the array.
    6. If second largest or second smallest does not exist,
       display an appropriate message.
    7. Otherwise, display both values.
    8. Stop the program.

Output:
    Enter the size of the array: 5
    Enter the array elements: 10 20 5 40 30
    Second largest element: 30
    Second smallest element: 10
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int arr[100], n, i;
    int largest = INT_MIN, secondLargest = INT_MIN;
    int smallest = INT_MAX, secondSmallest = INT_MAX;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n < 2 || n > 100)
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
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }

        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < secondSmallest && arr[i] != smallest)
        {
            secondSmallest = arr[i];
        }
    }

    if (secondLargest == INT_MIN || secondSmallest == INT_MAX)
    {
        printf("Second largest and second smallest distinct elements do not exist.\n");
    }
    else
    {
        printf("Second largest element: %d\n", secondLargest);
        printf("Second smallest element: %d\n", secondSmallest);
    }

    return 0;
}