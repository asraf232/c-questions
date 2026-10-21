/*
Requirement:
    To write a C program to merge two sorted arrays into
    a single sorted array without using any sorting function.

Design (Algorithm):
    1. Start the program.
    2. Get the sizes and elements of two sorted arrays.
    3. Initialize three index variables for the two input
       arrays and the merged array.
    4. Compare the elements of both arrays.
    5. Copy the smaller element into the merged array.
    6. Repeat until all elements of either array are copied.
    7. Copy the remaining elements of the first or second array.
    8. Display the merged sorted array.
    9. Stop the program.

Output:
    Enter the size of the first array: 4
    Enter the first sorted array: 10 20 30 40
    Enter the size of the second array: 3
    Enter the second sorted array: 15 25 35
    Merged sorted array: 10 15 20 25 30 35 40
*/

#include <stdio.h>

int main()
{
    int a[100], b[100], c[200];
    int n1, n2, i = 0, j = 0, k = 0;

    printf("Enter the size of the first array: ");
    scanf("%d", &n1);

    printf("Enter the first sorted array: ");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the size of the second array: ");
    scanf("%d", &n2);

    printf("Enter the second sorted array: ");
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }

    i = 0;
    j = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged sorted array: ");
    for (i = 0; i < k; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}