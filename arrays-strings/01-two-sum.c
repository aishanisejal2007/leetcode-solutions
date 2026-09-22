#include <stdio.h>

void twoSum(int nums[], int n, int target)
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("[%d, %d]\n", i, j);
                return;
            }
        }
    }

    printf("No solution\n");
}

int main()
{
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;

    int nums2[] = {3, 2, 4};
    int target2 = 6;

    printf("Test Case 1: ");
    twoSum(nums1, 4, target1);

    printf("Test Case 2: ");
    twoSum(nums2, 3, target2);

    return 0;
}