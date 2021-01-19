#include <stdio.h>
int main()
{
	long int c;
	double f;
	scanf("%ld", &c);
	
	f=(c*9.00/5.00)+32;
	
	printf("%.2lf\n", f);
	return 0;
}
