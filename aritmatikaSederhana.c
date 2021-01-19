#include <stdio.h>
int main()
{
	double a,b,c;
	scanf("%lf %lf", &a, &b);
	scanf("%lf", &c);
	
	a=(a/b)+c;
	
	printf("%.2lf\n", a);
	return 0;
}
