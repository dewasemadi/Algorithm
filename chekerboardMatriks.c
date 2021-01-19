#include <stdio.h>
int main()
{
	int n, a, b; //n= baris x kolom
	scanf(" %d", &n);
	for(a=1; a<=n; a++) //ini buat baris
	{
		for(b=1; b<=n; b++) //ini buat kolom
		{
			if(a%2==0)
			{
				if(b%2!=0)
					printf("1");
				else printf("0");
			}
			else if(a%2!=0)
			{
				if(b%2==0)
					printf("1");
				else
					printf("0");
			}
			if(b==n)
			
				printf("\n");
			
			else  
			
				printf(" ");
			
		}
	}
	return 0;
}
