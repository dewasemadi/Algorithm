#include <stdio.h>

int main()
{
    int n, a, b, c, x; //declare
    scanf("%d" , &x);
    for (int i = 1; i <= x; ++i)
    {
        scanf("%d %d %d %d",&n, &a, &b, &c); //baca
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= i; ++j)
            {
            if(j==1 && i!=n)
                printf("%d",a);
            else if(j==i && i!=1)
                printf("%d",c);
            else if(i==n && j!=n)
                printf("%d",b);
            else if(j<n && i<n)
                printf(" ");
        }
        printf("\n");
    }
        if(i != x)
            printf("\n");
    }
    return 0;
}
