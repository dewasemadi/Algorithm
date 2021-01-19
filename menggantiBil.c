#include <stdio.h>

int main()
{
    int x, y, num, i = 0;
    scanf("%d %d", &x, &y);
    while (1)
    {
        scanf("%d", &num);
        if (num == -1)
        {
            printf("\n");
            break;
        }
        if (num == x)
            printf("%d", y);
        else
            printf("%d", num);

        printf(" ");
    }
    return 0;
}