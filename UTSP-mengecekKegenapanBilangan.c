#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    if (x & 1) //ekspresi ganjil
        printf("0\n");
    else
        printf("1\n");
    return 0;
}
