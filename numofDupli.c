#include <stdio.h>
int main()
{
    int n, LastDupli, i, j;
    n = 12, LastDupli = 0;
    int A[12] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 15, 15, 20};
    for (i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (A[i] == A[j])
            {
                j++;
            }
            printf("%d is appearing %d times\n", A[i], j - i);
            i = j - 1;
        }
    }
    return 0;
}