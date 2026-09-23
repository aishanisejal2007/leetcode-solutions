#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char strs[][20], int n, char result[])
{
    int i, j;
    int len = strlen(strs[0]);

    for (i = 1; i < n; i++)
    {
        j = 0;

        while (j < len && strs[0][j] == strs[i][j])
        {
            j++;
        }

        len = j;
    }

    strncpy(result, strs[0], len);
    result[len] = '\0';
}

int main()
{
    char strs1[][20] = {"flower", "flow", "flight"};
    char strs2[][20] = {"dog", "racecar", "car"};

    char result[20];

    longestCommonPrefix(strs1, 3, result);
    printf("Test Case 1: %s\n", result);

    longestCommonPrefix(strs2, 3, result);
    printf("Test Case 2: %s\n", result);

    return 0;
}