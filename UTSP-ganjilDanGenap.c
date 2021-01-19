#include <stdio.h>

int main()
{
    int n, num;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &num);
        if (num % 2 == 0)
            printf("Genap\n");
        else
            printf("Ganjil\n");
    }
    return 0;
}