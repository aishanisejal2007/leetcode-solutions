#include <stdio.h>

int maxProfit(int prices[], int n)
{
    int minPrice = prices[0];
    int maxProfit = 0;
    int i;

    for (i = 1; i < n; i++)
    {
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else if (prices[i] - minPrice > maxProfit)
        {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}

int main()
{
    int prices1[] = {7, 1, 5, 3, 6, 4};
    int prices2[] = {7, 6, 4, 3, 1};

    printf("Test Case 1: %d\n", maxProfit(prices1, 6));
    printf("Test Case 2: %d\n", maxProfit(prices2, 5));

    return 0;
}