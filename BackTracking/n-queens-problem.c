/*
N-Queens Problem Statement
N - Queens problem is to place n - queens in such a manner on an
n x n chessboard that no queens attack each other by being in
the same row, column or diagonal.
*/

#include <stdio.h>
#include <stdlib.h>

int a[30], count = 0;

int place(int pos)
{
    int i;
    for (i = 1; i < pos; i++)
    {
        if ((a[i] == a[pos] || ((abs(a[i] - a[pos]) == abs(i - pos)))))
            return 0;
    }
}

void printSol(int n)
{
    int i, j;
    count++;
    printf("\n\n Solution #%d :\n", count);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i] == j)
                printf("Q\t");
            else
                printf("*\t");
        }
        printf("\n");
    }
}

void queen(int n)
{
    int k = 1;
    a[k] = 0;
    while (k != 0)
    {
        a[k] = a[k] + 1;
        while ((a[k] <= n) && !place(k))
            a[k]++;
        if (a[k] <= n)
        {
            if (k == n)
                printSol(n);
            else
            {
                k++;
                a[k] = 0;
            }
        }
        else
            k--;
    }
}

int main()
{
    int n;
    printf("Enter the number of Queens\n");
    scanf("%d", &n);
    queen(n);
    printf("\nTotal Solutions = %d\n", count);
    return 0;
}
