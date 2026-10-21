/*
Requirement:
    To write a C program to rotate the elements of an array
    by n positions in the specified direction (left or right).

Design (Algorithm):
    1. Start the program.
    2. Get the size and elements of the array.
    3. Get the number of positions to rotate and the direction.
    4. Calculate the effective rotation using n % size.
    5. If the direction is left, shift the elements to the left.
    6. If the direction is right, shift the elements to the right.
    7. Use a temporary array to store the rotated elements.
    8. Display the rotated array.
    9. Stop the program.

Output:
    Enter the size of the array: 5
    Enter the array elements: 10 20 30 40 50
    Enter the number of positions: 2
    Enter the direction (L/R): L
    Rotated array: 30 40 50 10 20
*/

#include <stdio.h>

int main()
{
    int arr[100], temp[100];
    int n, i, k;
    char direction;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid array size.\n");
        return 0;
    }

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions: ");
    scanf("%d", &k);

    printf("Enter the direction (L/R): ");
    scanf(" %c", &direction);

    k = k % n;

    if (direction == 'L' || direction == 'l')
    {
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[(i + k) % n];
        }
    }
    else if (direction == 'R' || direction == 'r')
    {
        for (i = 0; i < n; i++)
        {
            temp[i] = arr[(i - k + n) % n];
        }
    }
    else
    {
        printf("Invalid direction.\n");
        return 0;
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", temp[i]);
    }

    return 0;
}