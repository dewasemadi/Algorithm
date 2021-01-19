#include <stdio.h>

int main()
{
    int N, m, n;
    scanf("%d", &N);
    while (N--)
    {
        scanf("%d %d", &m, &n);
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1)
                    printf("*");
                else
                    printf(".");
            }
            printf("\n");
        }
    }
    return 0;
}