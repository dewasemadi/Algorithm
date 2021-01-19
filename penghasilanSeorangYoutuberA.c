#include <stdio.h>
int main()
{
	double a, duit; //durasi video
	long int b;		//jumlah viewer
	scanf("%lf %ld", &a, &b);

	if (b > 10000)
	{
		if (a > 15)
			duit = 3.5 * (b / 10000);
		else if (a > 5)
			duit = 2.5 * (b / 10000);
		else if (a > 0)
			duit = b / 10000;
		printf("%.1lf dollar\n", duit);
	}
	else
		printf("Tidak ada bayaran\n");
	return 0;
}
