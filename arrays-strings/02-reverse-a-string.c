#include <stdio.h>
#include <string.h>

void reverseString(char s[])
{
    int i = 0;
    int j = strlen(s) - 1;
    char temp;

    while (i < j)
    {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;

        i++;
        j--;
    }
}

int main()
{
    char str1[] = "hello";
    char str2[] = "world";

    reverseString(str1);
    reverseString(str2);

    printf("Test Case 1: %s\n", str1);
    printf("Test Case 2: %s\n", str2);

    return 0;
}