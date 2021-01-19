#include <stdio.h>
#include <limits.h>
int main()
{
	int n, max = INT_MIN, min = INT_MAX;
	long int a;
	double average, sum;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%ld", &a);
		sum += a; //ini buat total bilangan
		if (a > max)
			max = a;
		if (a < min)
			min = a;
	}
	average = sum / n;
	printf("%d %d %.2lf\n", min, max, average);
	return 0;
}
