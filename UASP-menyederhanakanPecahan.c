#include <stdio.h>

int main ()
{
	int n, a, b, x; //x = hasil penyederhanaan
	scanf("%d", &n); //baca n
	while(n--)
	{
		scanf("%d %d", &a, &b); //ini nilai a/b
		if(a==b || a%b==0)
		{
			x=a/b;
			printf("%d\n", x); //kondisi saat cth. 100/10
		}
		else
		{
			if(a>b)
			{
				x=a/b;
				printf("%d ", x);
				a-=x*b;
			}
			int n1=a, n2=b;
			while(n1!=n2)
			{
				if(n1<n2)
					n2-=n1;
				else
					n1-=n2;
			}
			printf("%d/%d\n", a/n1, b/n2);
		}
	}
	return 0;
}
