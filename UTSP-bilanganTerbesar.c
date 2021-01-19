#include <stdio.h>

int main()
{
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c); //3 bilangan bulat
	
	if(a>=b && a>=c)
		printf("1");
	if(b>=a && b>=c)
		printf("2");
	if(c>=a && c>=b)
		printf("3");
	
	printf("\n");
	
	return 0;
}

