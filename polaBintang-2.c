#include <stdio.h>
int main()
{
	int a, b, i;
	scanf("%d", &a);
	for (i = a; i >= 1; i--)
	{
		for (b = i; b >= 1; b--)
			printf("*");
		printf("\n");
	}
	return 0;
}
