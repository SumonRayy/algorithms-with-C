/*
    Description : This Program will solve the following Knapsack Problem Statement with Greedy Method Algorithm 
    "A thief is robbing a store and can carry a maximal weight of W into his knapsack. There are n items available in the store and weight of ith item is wi and its profit is pi. What items should the thief take?"
*/

#include <stdio.h>

int greedyFractionalKnapsack(int n, float p[], float w[], float Capacity)
{
    int x[n];
    float weight = 0;

    for (int i = 1; i < n; i++)
    {
        x[i] = 0;
    }
    for (int i; i < n; i++)
    {
    }

    return x;
}

int main(void)
{
    int n = 7;
    int capacity = 15;

    float p[] = {10.0, 5.0, 15.0, 7.0, 6.0, 18.0, 3.0};
    float w[] = {2.0, 3.0, 5.0, 7.0, 1.0, 4.0, 1.0};

    greedyFractionalKnapsack(n, p, w, capacity);
}