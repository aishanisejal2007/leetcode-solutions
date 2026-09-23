#include <stdio.h>
#include <string.h>

int isValid(char s[])
{
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == '}' && open != '{') ||
                (s[i] == ']' && open != '['))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char s1[] = "()[]{}";
    char s2[] = "(]";

    printf("Test Case 1: %s\n", isValid(s1) ? "Valid" : "Invalid");
    printf("Test Case 2: %s\n", isValid(s2) ? "Valid" : "Invalid");

    return 0;
}