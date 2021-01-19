#include <stdio.h>
int main()
{
    int x, n;
    scanf("%d", &x);
    for (int a = 0; a < x; a++)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; i++)
        {
            for (int j = n; j > i; j--)
                printf(" ");
            for (int k = 1; k <= (2 * i - 1); k++)
                printf("*");
            printf("\n");
        }
        if (a != x - 1)
            printf("\n");
    }
    return 0;
}