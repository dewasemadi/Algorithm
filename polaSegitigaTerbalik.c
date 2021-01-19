#include <stdio.h>

int main()
{
    long int a, i, j, z;
    scanf("%ld", &a);

    z = (a - 1) * 2 + 1;
    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= z; j++)
        {
            if (i == 1)
                printf("*");
            else
            {
                if (j == i || j == z)
                    printf("*");
                else
                    printf(" ");
            }
        }
        z -= 1;
        printf("\n");
    }
}
