/*
    Description : This program gives the least amount of INR coins for a given amount of Money;
    NOTE : coin set is {20, 10, 5, 1};
*/
#include <stdio.h>

// The Length of the Array/Coin Set
#define LEN 4

//GreedyAlgorithm :
void greedy(int amount)
{
    int i = 0;
    int coinSet[LEN] = {20, 10, 5, 1};
    int number;

    while (i < LEN)
    {
        if (coinSet[i] <= amount)
        {
            number = amount / coinSet[i];
            printf("%d of %d is needed \n", number, coinSet[i]);
            amount = amount - number * coinSet[i];
        }
        i++;
    }
}

int main(void)
{
    int amount = 86;
    greedy(amount);
}