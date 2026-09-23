#include <stdio.h>

void moveZeroes(int nums[], int n)
{
    int i;
    int position = 0;
    int temp;

    for (i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp = nums[position];
            nums[position] = nums[i];
            nums[i] = temp;
            position++;
        }
    }
}

void printArray(int nums[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    printf("\n");
}

int main()
{
    int nums1[] = {0, 1, 0, 3, 12};
    int nums2[] = {0, 0, 1};

    moveZeroes(nums1, 5);
    moveZeroes(nums2, 3);

    printf("Test Case 1: ");
    printArray(nums1, 5);

    printf("Test Case 2: ");
    printArray(nums2, 3);

    return 0;
}