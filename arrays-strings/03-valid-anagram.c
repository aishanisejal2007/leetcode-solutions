#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[])
{
    int count[256] = {0};
    int i;

    if (strlen(s) != strlen(t))
        return 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    char s1[] = "anagram";
    char t1[] = "nagaram";

    char s2[] = "rat";
    char t2[] = "car";

    printf("Test Case 1: %s\n",
           isAnagram(s1, t1) ? "true" : "false");

    printf("Test Case 2: %s\n",
           isAnagram(s2, t2) ? "true" : "false");

    return 0;
}