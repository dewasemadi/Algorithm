#include <stdio.h>
int main()
{
	float a, b, i, sum, average;
	scanf("%f", &a);
	while(i++<a)
	{
		scanf("%f", &b);
		sum+=b;
	}
	average = sum/a;
	printf("%.3f", average);
	return 0;
}
