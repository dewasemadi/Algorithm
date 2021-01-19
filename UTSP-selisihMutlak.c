#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	if(n>50)
		n=fabs(n-50)*3;
	else 
		n=fabs(n-50);
		
	printf("%d\n", n);
	return 0;
}
