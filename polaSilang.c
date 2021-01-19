#include <stdio.h>

int main()
{
	int n, b, k, x, y; //n=banyaknya pola, b=baris, k=kolom
	scanf("%d", &n);
	for (int p = 1; p <= n; p++) //ini buat nentuin jumlah pola
	{
		scanf("%d %d %d %d", &b, &k, &x, &y); //ini buat scan 4 bilangan, b&k=ukuran kotak, x&y= titik silang

		//ini ukuran kotak
		for (int q = 1; q <= b; q++)
		{
			for (int r = 1; r <= k; r++)
			{
				if (q == r || r == b - x + 1)
					printf("*");
				else if (q == r || r == k + y + 1)
					printf("*");
				else
					printf(".");
			}
			printf("\n");
		}
	}
	return 0;
}
