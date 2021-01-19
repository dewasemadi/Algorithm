#include <stdio.h>

int main()
{
    int n, i, j, x, z, p, c = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x);
        for (j = 1; j <= x; j++) //segitiga 1
        {
            for (int b = 1; b <= x; b++)
            {
                if (b >= j)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

        for (z = 1; z <= x - 1; z++)
        {
            for (p = 1; p <= x - 1; p++)
                printf(" ");
            for (int t = 1; t <= z + 1; t++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}
