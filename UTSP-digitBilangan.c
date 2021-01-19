#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	float b;
	scanf("%d", &a);
	
	b=((a/10)%10)/3; //perhitungan
	
	printf("%.2f\n", b);
	return 0;
}
