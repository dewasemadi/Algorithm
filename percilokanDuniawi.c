#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	for (int i = 1; i <= a; i++)
		printf("*\n");
	for (int p = 1; p <= b; p++)
		printf(" *\n");
	for (int z = 1; z <= c; z++)
		printf("  *\n");
	return 0;
}
