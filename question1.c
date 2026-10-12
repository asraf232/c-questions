/*
   Requirement:
               To find the second largest element in an integer array
               without sorting the array.

   Design (Algorithm):
                     1. Initialize "largest" and "second" with
                        array elements.
                     2. Use a "for" loop to check the remaining
                        array elements.
                     3. Use "if-else" conditions to find the
                        largest and second largest elements.

   Output:
           Second largest = 30.
*/

#include <stdio.h>

int secondLargest(int arr[], int size)
{
    int largest = arr[0];
    int second = arr[1];

    if (second > largest)
    {
        int temp = largest;
        largest = second;
        second = temp;
    }

    for (int i = 2; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int arr[] = {10, 25, 8, 40, 30};
    int size = 5;

    printf("Second largest element = %d",
           secondLargest(arr, size));

    return 0;
}