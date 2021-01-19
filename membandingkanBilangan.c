#include <stdio.h>
int main()
{
	int n, x;
	scanf("%d", &n);
	for(int i=0; i<5; i++)
	{
		scanf("%d", &x);
		if(x>=1000)
			printf("LEBIH BESAR ATAU SAMA DENGAN\n");
		else printf("LEBIH KECIL\n");
	}
	return 0;
}
