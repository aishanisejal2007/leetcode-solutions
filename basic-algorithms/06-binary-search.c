#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9};
    int arr2[] = {2, 4, 6, 8, 10};

    printf("Test Case 1: %d\n", binarySearch(arr1, 5, 5));
    printf("Test Case 2: %d\n", binarySearch(arr2, 5, 7));

    return 0;
}