#include <stdio.h>
int main()
{
	int min, k, s, maks; //min=tarif min, k=jumlah stasiun, s=tarif stasiun/k, maks= tarif maks
	int n, hasil; //n=jumlah stasiun
	scanf("%d %d %d %d", &min, &k, &s, &maks);
	scanf("%d", &n);
	
	hasil=min+(n-k)*s; //hitungan dasarnya
	if(hasil>maks)
	{
		printf("%d\n", maks);
	}
	else printf("%d\n", hasil);
	return 0;
}
