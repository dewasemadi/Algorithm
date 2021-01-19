#include <stdio.h>
int main()
{
	int m, n, nilai, tes = 0, i = 0, j = 0;
	scanf("%d %d", &m, &n);
	while (i < m)
	{
		nilai = 0;
		if (!tes)
			scanf("%d", &nilai);
		if (nilai == -9)
		{
			tes = 1;
			nilai = 0;
		}
		j++;
		if (j == n)
		{
			printf("%d\n", nilai);
			j = 0;
			i++;
		}
		else
			printf("%d ", nilai);
	}
	return 0;
}
